#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s; 

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    stack <int> temp;

    while(s.size()>0)
    {
        cout<<s.top()<<" ";
        int x = s.top();
        temp.push(x);
        s.pop();
    }

    while(temp.size()>0)
    {
        int x = temp.top();
        s.push(x);
        temp.pop();
    }
    
}