#include<iostream>
using namespace std; 
class Node{
    public:
    int val;
    Node* next;

    // constructor 

    Node(int val)
    {
        this->val = val; 
        this->next = NULL;
    }

};

void display(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void size(Node* head)
{
    Node* temp = head; 

    int count = 0; 

    while(temp!=NULL)
    {
        count++;
        temp = temp->next; 
    }

    cout<<count;
}
int main()
{
    Node* a = new Node(20); 
    Node* b = new Node(30); 
    Node* c = new Node(40); 
    Node* d = new Node(50); 

    a->next = b; 
    b->next = c; 
    c->next = d; 
    d->next = NULL; 

    display(a); 
    size(a); 
}