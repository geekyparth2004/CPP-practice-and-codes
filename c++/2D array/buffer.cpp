#include<iostream>
using namespace std;

void display(int n,int l)
{   int a[n][l];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[3][3];

    cout<<"Enter the elements: ";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    display(3,3);

    return 0;
}