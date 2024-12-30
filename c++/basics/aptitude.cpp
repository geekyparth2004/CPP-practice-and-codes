#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value";
    cin>>n;

    int sq = (n*n) - 1;

    int al = sq%26; 

    cout<<al; 
}