#include<iostream>
using namespace std; 
void print1ton(int n , int i)
{
    if(i>n)
    {
        return;
    }   

    cout<<i<<" ";
    
    print1ton(n,i+1);
}

int main()
{
    int n; 
    cin>>n;

    int i;
    
    print1ton(n,1);
}