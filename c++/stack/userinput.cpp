#include<iostream>
#include<stack>
using namespace std; 
int main()
{
    stack <int> st; 

    int n; 
    cin>>n; 

    for(int i = 0 ;  i < n ; i++)
    {
        int val; 
        cin>>val; 
        st.push(val); 
    }

    while(st.size()!=0)
    {
        cout<<st.top(); 
        st.pop(); 
    }
}