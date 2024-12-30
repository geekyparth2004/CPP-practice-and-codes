#include<iostream>
using namespace std;
int main()
{
    int arr[2][4];
    int i;
    int j;

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=3;j++)
        {
            cin>>arr[i][j];
        }
    }

    
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=3;j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}

