#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string s = "parth"; 

    int i = 0; 

    s.erase(s.begin()+i);

    cout<<s[i]; 
}