#include<iostream>
using namespace std; 
int stair(int x)
{
    if(x==2) return 2; 
    if(x==1) return 1; 
    return stair(x-1) + stair(x-2); 
}

int main()
{   
    int n; 
    cout<<"Enter the value";
    cin>>n; 
    cout<<stair(n); 
}
