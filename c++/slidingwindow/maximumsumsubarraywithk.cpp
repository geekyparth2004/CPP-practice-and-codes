#include<iostream>
#include<climits>
using namespace std; 
int main()
{
    int arr[] = {7,1,2,9,2,4,1,0}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 

    // finding sum of first window

    int prevsum = 0; 
    int currentsum = 0; 
    int maxsum = INT_MIN; 
    int maxidx = 0;

    for(int i = 0 ; i < k ; i++)
    {
        prevsum += arr[i]; 
    }

    maxsum = prevsum; 


    // sliding window

    int i = 1; 
    int j = k; 

    while(j<n)
    {
        currentsum = prevsum + arr[j] - arr[i-1];
        if(maxsum<currentsum){
            maxsum = currentsum;
            maxidx = i; 
        }
        prevsum = currentsum;
        i++; 
        j++;  
    }

    cout<<maxsum;
    cout<<maxidx;



}