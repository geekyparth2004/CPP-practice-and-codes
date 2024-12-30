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

    void insertatend(int val){
        Node* temp = new Node(val); 

        if(size == 0) 
            head = tail = temp; 
        else{
            tail->next = temp;
            tail = temp;
        } 

        size++; 
    }

    void insertatbegin(int val){
        Node* temp = new Node(val);

        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
            size++;
        }
    }

    
    void insertatidx(int idx, int value)
    {
        if(idx<0 || idx>size){
            cout<<"Invalid Index";
            return;
        }

        else if(idx==0) insertatbegin(value);
        else if (idx==size) insertatend(value);
        else{
            Node* temp = head;
            Node* t = new Node(value);
            for(int i = 1 ; i <= idx - 1 ; i++)
            {
                temp = temp->next;
            }

            t->next = temp->next;
            temp->next = t;
        }
        
        size++;

    }

    void display(){
        Node* temp = head; 

        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}; 

int main(){
    LinkedList list;
    list.insertatend(20);
    list.insertatend(0);
    list.insertatend(30);
    list.display();
    list.insertatbegin(32);
    list.display();
    list.insertatidx(3,78);
    list.insertatidx(0,54);
    list.display();
    cout<<list.size;
    
    return 0;
}