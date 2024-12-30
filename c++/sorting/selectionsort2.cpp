#include<iostream>
#include<climits>
using namespace std; 
int main()
{
    int arr[] = {2,1,4,5,2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Selection sort

    for(int i = 0 ; i < n-1 ; i++) // pass
    {
        int min = INT_MAX; 
        int mindx = -1; 

        // minimum element calculate

        for(int j = i ; j < n ; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j]; 
                mindx = j;
            }
        }

        swap(arr[i],arr[mindx]);
    }
    

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}