#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    

    cout<<"Enter the number :";
    cin>>n;

    while(n>0)
    {
        rev = n%10;
        
        n = n/10;

        cout<<rev;

    }
   

}