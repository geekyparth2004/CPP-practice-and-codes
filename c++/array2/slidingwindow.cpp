#include<iostream>
#include<climits>
using namespace std; 
int main()
{
    int n; 
    cout<<"Enter the size of the array"; 
    cin>>n; 

    int arr[n];
    int maxproduct = INT_MIN;  

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the element at index "<<i<<" ";
        cin>>arr[i];
    }    
 // maximum subarray 

    int left = 0;
    int right = 2;

    while(right<n)
    {   
        int product = 1; 

        for(int i = left ; i <= right ; i++)
        {
             product *=  arr[i];

        }
        maxproduct = max(maxproduct , product);
        left++;
        right++;
    } 

    cout<<maxproduct; 
}