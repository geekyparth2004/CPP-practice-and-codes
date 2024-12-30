#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of elements :";
     cin>>n;

     int a[n];
        cout<<"Enter the number :";
    int i;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    int sum = 0;
    for(i=1;i<=n;i++)
    {
        sum = sum + a[i];
    }

    cout<<sum;
}