#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer :";
    cin>>n;

    if(n<0)
    {
        cout<<-1*n;
    }
    else
    {
        cout<<n;
    }

    return 0; 
}
