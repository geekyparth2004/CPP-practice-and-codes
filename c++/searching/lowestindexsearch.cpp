#include<iostream>
using namespace std; 

int main()
{
    int n; 

    cout<<"Enter the value of n"; 
    cin>>n; 

    int arr[n];

    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    int target; 

    cout<<"Enter the target"; 
    cin>>target; 

    int left = 0; 
    int right = n - 1;

    while(left<=right)
    {
        int mid = left + (right - left)/2;

        if(arr[mid]==target)
        {
            if(arr[mid]!= arr[mid-1])
            {
                cout<<mid;
                break;
            }
            else
            {
                right = mid - 1;
            }
        }
        else if(arr[mid]>target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
}