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


    void deleteatbegin(){
        head = head->next;
        size--;
    }

    void deleteatidx(int idx)
    {
        Node* temp = head; 

        for(int i = 1 ; i <= idx ; i++)
        {
            temp = temp->next;
        }

        temp = temp->next->next;
        size--;
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
    list.deleteatbegin();
    list.display();
    list.deleteatidx(2);
    list.display();
    cout<<list.size;
    
    return 0;
}
