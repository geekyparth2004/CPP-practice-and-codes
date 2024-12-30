#include<iostream>
using namespace std; 
void displayarr(int arr[], int n, int idx )
{
    if(idx==n) return; 
    cout<<arr[idx];
    displayarr(arr,n,idx+1); 
}

int main()
{
    int arr[] = {2,4,5,2,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    displayarr(arr,n,0);
}
