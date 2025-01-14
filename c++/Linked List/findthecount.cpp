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

int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20); 
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    int count = 0;
    Node* temp = a;

    while(1){
        count++;
        if(temp->next==NULL) break;
        temp = temp->next;
    }

    cout<<count;
}