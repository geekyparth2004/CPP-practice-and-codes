#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s = "hello"; 

    stack <char> st;
    
    int n = s.length();
    
    for(int i = 0 ; i < n ; i++)
    {
        st.push(s[i]);
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}