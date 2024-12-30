#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
void duplicates(string s)
{
    stack<char> st;

    st.push(s[0]);
    for(int i = 1 ; i < s.length() ; i++)
    {
        if(st.top()!=s[i]) st.push(s[i]); 
    }

    s = "";
    while(!st.empty())
    {
        s = st.top() + s;
        st.pop();
    }

    cout<<s;

} 
int main()
{
    string s = "aaabbcddaabffg";

    duplicates(s);
}