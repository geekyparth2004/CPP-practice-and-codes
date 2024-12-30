#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a[n],max = 1;

    cout<<"Enter the size of an array";
    cin>>n;

    cout<<"Enter the value of an array";

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>max)
        {
            max = a[i];
        }
        
    }

    cout<<"Maximum value of an array"<<max;


}