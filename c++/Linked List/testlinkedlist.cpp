#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse a linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;

    while (current) {
        Node* nextNode = current->next; // Save the next node
        current->next = prev;          // Reverse the current node's pointer
        prev = current;                // Move prev to the current node
        current = nextNode;            // Move to the next node
    }

    return prev; // New head of the reversed list
}

// Function to print a linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to delete a linked list (to free memory)
void deleteList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of linked lists: ";
    std::cin >> n;

    std::vector<Node*> lists(n, nullptr); // To store heads of all linked lists

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter nodes for linked list " << i + 1 << " (terminate with -1):\n";
        Node* head = nullptr;
        Node* tail = nullptr;

        while (true) {
            int value;
            std::cin >> value;
            if (value == -1) break; // Sentinel value to end the current list

            Node* newNode = new Node(value);
            if (!head) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        lists[i] = head; // Store the head of the current linked list
    }

    std::cout << "\nThe original linked lists are:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Linked List " << i + 1 << ": ";
        printList(lists[i]);
    }

    // Reverse each linked list
    for (int i = 0; i < n; ++i) {
        lists[i] = reverseList(lists[i]);
    }

    std::cout << "\nThe reversed linked lists are:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Linked List " << i + 1 << ": ";
        printList(lists[i]);
    }

    // Clean up memory
    for (Node* head : lists) {
        deleteList(head);
    }

    return 0;
}
