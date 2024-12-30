#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the value of number 1 and number 2 :";
    cin>>a>>b; // 12 and 24

    int i;

    for(i=1;i<=max(a,b);i++) // 1 to 24
    {
        if(a%i==0 && b%i==0)
        {

            c = i;
        }   
    }

    cout<<c;
}