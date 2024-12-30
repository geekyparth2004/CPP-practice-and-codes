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

    stack <int> helper; 

    while(s.size()>0)
    {
        helper.push(s.top());
        s.pop();
    }

    s.push(92);

    while(helper.size()>0)
    {
        s.push(helper.top());
        helper.pop();
    }

    cout<<s.size();
}