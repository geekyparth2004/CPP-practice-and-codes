#include<iostream>
#include<stack>
using namespace std; 
int main()
{
    stack <int> s;
    int n;
    s.push(20);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    cout<<"Enter the number";
    cin>>n;
    s.push(n);
    cout<<s.size();
    cout<<s.top();
}