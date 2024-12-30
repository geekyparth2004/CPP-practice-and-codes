#include<iostream>
#include<stack>
using namespace std;
void displayreverse(stack <int> &st)
{
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();

    displayreverse(st);
    st.push(x);
}
int main()
{
    stack <int> s; 

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    displayreverse(s);
}