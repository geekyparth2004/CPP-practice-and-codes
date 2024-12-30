#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

    void display(Node* head) {
        while (head) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }

    void displaytail(Node* tail){
        while(tail){
            cout<<tail->val<<" ";
            tail = tail->prev;
        }
        cout<<endl;
    }
    
};

int main() {
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    a->prev = NULL;

    a->display(a);
    e->displaytail(e);

    return 0;
}
