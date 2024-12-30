#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
    cin>>n>>m;

    int arr1[n];
    int arr2[m];
    int arr3[m]; 

    for(int i = 0 ; i < n ; i++) 
    {
        cout<<"Enter the value 1";
        cin>>arr1[i]; 
    }

    
    for(int i = 0 ; i < m ; i++) 
    {
        cout<<"Enter the value 2"; 
        cin>>arr2[i]; 
    }

    
    for(int i = 0 ; i < m ; i++) 
    {   cout<<"Enter the value 3";
        cin>>arr3[i]; 
    }

    int sum = 0; 
    int val = 0; 

    while(val<n)
    {   int mini = INT_MAX; 
        for(int i = 0 ; i < m ; i++)
        {
            int val1 = (arr1[val]/arr2[i])*arr3[i];
            mini = min(val1,mini); 
        }

        sum += mini + sum; 
        val++;
    }

    cout<<sum; 
}