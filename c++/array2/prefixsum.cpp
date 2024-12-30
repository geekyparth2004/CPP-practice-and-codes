#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector <int> arr(5); 

    for(int i = 0 ; i < 5 ; i++)
    {
        cin>>arr[i]; 
    }

    // prefix sum 

    vector <int> v(5);

    v[0] = arr[0];

    for(int i = 1 ; i < 5 ; i++)
    {
        v[i] = arr[i] + v[i-1];
    }


    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<v[i]<<" ";
    }
}