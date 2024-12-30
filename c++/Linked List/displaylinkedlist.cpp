#include<iostream>
using namespace std; 

class Node{
public:
    int value;
    Node* next; 
    
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class Linkedlist{
public:
    Node* head; 
    Node* tail; 
    int size; 
    
    Linkedlist(){
        head = tail = NULL; 
    }
    
    void display(){
        Node* temp = head; 
        while(temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};


int main(){
    Linkedlist list;

    Node* a = new Node(30);
    Node* b = new Node(40); 

    list.head = a;
    a->next = b; 
    b->next = NULL; 

    list.display(); 
    delete a; // Deallocate memory
    delete b; // Deallocate memory

    return 0;
}
