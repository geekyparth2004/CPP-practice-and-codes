#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    long int result =1;

    cout<<"Enter the value of the integer and power function respectively :";
    cin>>a>>b;

    for(i=0;i<b;i++)
    {
        result = result * a;
    }
    
    cout<<result;
}