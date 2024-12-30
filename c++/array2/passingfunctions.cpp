#include<iostream>
using namespace std;
int change(int a[])
{
    a[5] = 4;
    
}
int main()
{  
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    change(n);

}