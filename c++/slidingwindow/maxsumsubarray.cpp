#include<iostream>
#include<limits.h>
using namespace std; 
int main()
{
    int arr[] = {1,2,3,4,2,6,7}; 
    int k = 3; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT_MIN;
    for(int i = 0 ; i <= n-k ; i++)
    {   int sum = 0;
        for(int j = i ; j<i+k ; j++){
            sum += arr[j];
        }

        maxsum = max(maxsum,sum);
    }

    cout<<maxsum;
}