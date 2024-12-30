#include<iostream>
using namespace std; 
int sumofarray(int arr[] , int n)
{
    if(n==0) return 0; 

    return arr[n-1] + sumofarray(arr,n-1); 
}

int main()
{
    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<sumofarray(arr,n); 
}