#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cin>>n;
    int sum = 0;
    
    while(n>0)
    {
        int a = a%10; 
        sum = sum + a; 
        a = a/10; 
    }

    cout<<sum;

}
