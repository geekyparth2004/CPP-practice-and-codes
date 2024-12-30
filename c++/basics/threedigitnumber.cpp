#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the positive integer :";
    cin>>n;

    if(n>=100&&n<=999)
    {
        cout<<"The number is three digit";
    }

    else{
        cout<<"The number is not three digit";
    }

    return 0;

}