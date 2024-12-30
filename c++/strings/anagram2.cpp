#include<bits/stdc++.h>
using namespace std; 
int valididx(string s , string t)
{
    int count = 0;
    int n = s.length();
    int m = t.length();

    sort(s.begin(), s.end()); 
    sort(t.begin(), t.end());

    int mini = min(n,m);

    if(s.length()!=t.length()) return 0; 

    for(int i = 0 ; i < mini ; i++)
    {
        if(s[i]==t[i]) count++;

        return count; 
    } 
}

int main()
{
    string s; 
    string  t; 
    cin>>s>>t;
    
    cout<<valididx(s,t)<<endl;
}
