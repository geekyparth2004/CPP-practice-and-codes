#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s = "ab!{}()cd"; 
    string punc = "!(){}";

    // main program

    int x = 0; 

    while(x<punc.size())
    {
    s.erase(remove(s.begin(), s.end(), punc[x]), s.end());
    x++;
    } 

    cout<<s;
}