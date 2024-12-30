#include<iostream>
#include<vector>
#include<algorithm>
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

class LinkedList{
public:
    Node* head; 
    Node* tail; 
    int size; 

public:
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void display(){
        Node* temp = head; 

        while(temp->next != NULL){
            cout<<temp->value;
            temp = temp->next;
        }
    }

    void deletenode(Node* head , Node* target){
        Node* temp = head; 
        while(temp->next = NULL){
            temp->next = temp->next->next;
            size--;
        }
    }
}