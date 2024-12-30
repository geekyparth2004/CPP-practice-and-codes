#include<iostream>
using namespace std; 
class Node{
    public:
    int value;
    Node* next;
};

int main()
{
    Node a; 
    a.value = 24;

    Node b;
    b.value = 43; 

    Node c; 
    c.value = 23; 


    // Next field creation 

    a.next = &b;
    b.next = &c; 
    c.next = NULL;


    cout<<a.value;
}
