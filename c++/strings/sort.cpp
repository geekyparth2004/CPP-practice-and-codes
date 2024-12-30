#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    string s;
    cout<<"Enter the string";
    cin>>s; 

    sort(s.begin(),s.end());

    cout<<s;
}