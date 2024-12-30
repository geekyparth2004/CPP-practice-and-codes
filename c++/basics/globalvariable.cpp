#include<iostream>
using namespace std; 
int arr[4] = {2,3,1,3}; 

int value(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        return arr[i]; 
    }
}


int value2(int n2)
{
    for(int i = 2 ; i < n2 ; i++)
    {
        return arr[i]; 
    }
}


int main()
{
    int n; 

    n = 3; 

    cout<<value2(n); 
}