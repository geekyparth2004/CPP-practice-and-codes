#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

const int PORT = 12345;
const int MAX_CONNECTIONS = 5;

int main() {
    int serverSocket, clientSocket;
    sockaddr_in serverAddr, clientAddr;
    socklen_t clientAddrLen = sizeof(clientAddr);
    char buffer[1024];

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Error creating socket\n";
        return -1;
    }

    // Set up server address structure
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(PORT);

    // Bind socket
    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
        std::cerr << "Error binding socket\n";
        close(serverSocket);
        return -1;
    }

    // Listen for incoming connections
    if (listen(serverSocket, MAX_CONNECTIONS) == -1) {
        std::cerr << "Error listening for connections\n";
        close(serverSocket);
        return -1;
    }

    std::cout << "Server listening on port " << PORT << "...\n";

    // Accept connections and handle messages
    while (true) {
        clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen);
        if (clientSocket == -1) {
            std::cerr << "Error accepting connection\n";
            close(serverSocket);
            return -1;
        }

        inet_ntop(AF_INET, &(clientAddr.sin_addr), buffer, INET_ADDRSTRLEN);
        std::cout << "Connection established with client " << buffer << ":" << ntohs(clientAddr.sin_port) << std::endl;

        // Handle messages
        while (true) {
            memset(buffer, 0, sizeof(buffer));
            int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
            if (bytesReceived <= 0) {
                std::cout << "Connection closed with client " << buffer << ":" << ntohs(clientAddr.sin_port) << std::endl;
                close(clientSocket);
                break;
            }

            std::cout << "Received message from client " << buffer << ":" << ntohs(clientAddr.sin_port) << " - " << buffer << std::endl;
        }
    }

    // Close server socket
    close(serverSocket);

    return 0;
}
