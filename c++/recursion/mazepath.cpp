#include<iostream>
using namespace std; 
int path(int x)
{
    if(x==2) return 2; 
    return x + path(x-1); 
}
int main()
{
    cout<<path(7); 
}