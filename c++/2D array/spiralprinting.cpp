#include<iostream>
using namespace std;
int main()
{
    int m; 

    cout<<"Enter the rows";
    cin>>m;

    int n;
    cout<<"Enter the cols";
    cin>>n;

    
    int arr[m][n];

    cout<<"Enter the value of arrays";

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0; j <n ; j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i = 0 ; i < m ; i++)
    {
        if(i%2 == 0)
        for(int j = 0; j <n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        else{

            for(int j = n-1 ; j>=0 ; j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    


}