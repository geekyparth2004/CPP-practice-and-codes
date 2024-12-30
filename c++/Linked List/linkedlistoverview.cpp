#include<bits/stdc++.h>
using namespace std; 
class Node{
    public: 

    int val; 
    Node* next; 

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public: 
    Node* head; 
    Node* tail;
    int size; 

    LinkedList()
    {
        head = tail = NULL; 
        size = 0; 
    } 

    void insertatend(int val)
    {
        Node* temp = head; 
        Node* t = new Node(val); 

        if(size==0)
        {
            head = tail = t; 
        }

        else {
            tail->next = t;
            tail = t;
        }

        size++; 
    }

    void display()
    {
        Node* temp = head;

        while(temp!=NULL)
        {
            cout<<temp->val<<" "; 
            temp = temp->next; 
        }
        cout<<endl; 
    }

    void insertatbegin(int val)
    {
        Node* temp = new Node(val);

        if(size==0)
        {
            head = tail = temp; 
        }

        else{
            temp->next = head; 
            head = temp; 
        }

        size++;
    }

    void insertidx(int idx , int val)
    {
        if(idx==0) insertatbegin(val);
        else if(idx==size) insertatend(val); 
        else if(idx<0 || idx>size) cout<<"Invalid"; 
        else{
            Node* t = new Node(val); 
            Node* temp = head; 

            for(int i = 1 ; i <= idx-1 ; i++)
            {
                temp = temp->next; 
            }

            t->next = temp->next; 
            temp->next = t; 

            size++;
        }

    }

    void deleteathead()
    {
        if(size==0) cout<<"Invalid"; 
        else if(size==1)
        {
            head = head->next; 
            tail = tail->next; 
        }

        else{
            head = head->next;
        }

        size--;
    }

    void deleteattail()
    {
        if(size==0) cout<<"Invalid";
        else if(size==1){
            head = head->next; 
            tail = tail->next; 
        }

        else{
            Node* temp = head;

            while(temp->next != tail)
            {
                temp = temp->next;
            }

            temp->next = NULL; 
            tail = temp; 

        }

        size--;
    }

    void deleteatidx(int idx)
    {
        if(idx<0 || idx>size) cout<<"Invalid"; 
        else if(idx==0)  deleteathead();
        else if(idx==size-1) deleteattail();
        else{
            Node* temp = head;

            for(int i = 0 ; i <= idx-1 ; i++)
            {
                temp = temp->next;
            }

            temp->next = temp->next->next;  
        }

        size--;
    }

    void getidx(int val)
    {
        Node* temp = head;

        for(int i = 0 ; i <= val ; i++)
        {
            temp = temp->next;
        }

        cout<<temp->val;
    }

};


int main()
{
    LinkedList ll; 

    ll.insertatend(20);
    ll.display(); 
    ll.insertatend(30);
    ll.display();
    ll.insertatbegin(40); 
    ll.display(); 
    ll.insertidx(2,34);
    ll.display();
    ll.deleteatidx(1);
    ll.display();
    ll.getidx(0);
}