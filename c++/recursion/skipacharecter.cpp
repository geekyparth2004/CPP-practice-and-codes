#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string str = "Parth Goel"; 
    string s = ""; 

    for(int i = 0 ; i < str.length(); i++)
    {
        if(str[i]!='t') s = s + str[i]; 
    }

    cout << s;
}

