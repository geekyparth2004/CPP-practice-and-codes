#include<iostream>
using namespace std; 
class Node{
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL; 
    }

    class LinkedList{
        public:
        
        Node* head;
        Node* tail;
        int size;

        LinkedList(){
            head = tail = NULL;
            size = 0;
        }
    }

    void InsertAttail(int val)
    {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tai
        }
    }
}