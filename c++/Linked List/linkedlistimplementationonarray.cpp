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

    vector <int> v;

    Node* temp = a;
    while(1)
    {
        v.push_back(temp->value);
        if(temp->next==NULL) break;
        temp = temp->next;
    }

    reverse(v.begin(),v.end()); 

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<endl;
    }

}