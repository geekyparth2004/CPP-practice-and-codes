#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string str;

    cout<<"Enter the letters";

    cin>>s;

    int half = s.size();

    reverse(s.begin(),s.begin()+half/2);

    cout<<s;



}