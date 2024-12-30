#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {1,2,3,4,1,1}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxcount = 0; 

    for(int i = 0 ; i < n ; i++)
    {   
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] == arr[j]) count++;
        }

        maxcount = max(maxcount,count); 
    }

    cout<<maxcount;
}