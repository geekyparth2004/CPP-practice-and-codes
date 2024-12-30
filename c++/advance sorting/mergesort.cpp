#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int arr [] = {6,2,3,1,4,3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int half = n/2;
    int shalf = n - n/2;
    int arr1 [half]; 
    int arr2 [shalf];

    for(int i = 0 ; i < half ; i++)
    {
        arr1[i] = arr[i];
    }

    for(int i = 0 ; i < shalf ; i++)
    {
        arr2[i] = arr[i+half];
    }

    sort(arr1,arr1+half); 
    sort(arr2,arr2+shalf); 

    for(int i = 0 ; i < half  ; i++ )
    {
        cout<<arr2[i];
    }
}