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

    Node temp = a; 
    
    // Last value will not print
    while(temp.next!=NULL)
    {
        cout<<temp.value<<endl;
        temp = *(temp.next);
    }

    // Last value will be printed 

    while(1)
    {
        cout<<temp.value; 

        if(temp.next==NULL) break;

        temp = *(temp.next);
    }
}
