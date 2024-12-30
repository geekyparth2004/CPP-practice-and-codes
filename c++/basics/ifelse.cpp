#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer :";
    cin>>n;

    if(n%5==0)
    {
        cout<<"Value is divisible by 5";
    }
    else
    {
        cout<<"Value is not divisble by 5";
    }

    return 0; 
}
