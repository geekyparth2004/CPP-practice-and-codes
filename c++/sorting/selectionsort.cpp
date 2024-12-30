#include<iostream>
#include<climits>
using namespace std; 

int main()
{
    int arr[] = {3,2,5,6,1};

    for(int ele : arr )
    {
        cout<<ele<<" ";
        
    }

    cout<<endl;


    int i;
    int j;
    int m; 
    int mindx;

    for(i = 0; i < 4; i++) 
    {
        m = INT_MAX; 
        mindx = -1;
        for(j=i; j<5; j++)
        {
            if(arr[j] < m)
            {
                m = arr[j];
                mindx = j;
            }
        }

        swap(arr[i], arr[mindx]);
    }

    for(int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}