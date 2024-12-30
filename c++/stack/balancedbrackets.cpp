#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(const string& s)
{
    if(s.length() % 2 != 0) return false;

    stack<char> st;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(st.empty())
        {
            return false;
        }
        else if(s[i] == ')')
        {
            st.pop();
        }
    }

    return st.empty();
}

int main()
{
   string s = "()()(";
    cout << isBalanced(s);
    return 0;
}
