#include<iostream>
using namespace std;
int main()
{
    int n,count=0,dig;
    int sum=0;

    cout<<"Enter the number :";
    cin>>n;

    while(n>0)
    {
        dig = n%10;
        sum = sum + dig;
        n = n/10;

    }

    cout<<sum;

}
