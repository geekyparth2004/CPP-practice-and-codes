#include<iostream>
using namespace std;
int stairs(int n)
{
    // base case 
     if(n==1) return 1;
     if(n==2) return 2; 

    // recursive call
     return stairs(n-1) + stairs(n-2);
}

int main()
{
    int n; 
    cin>>n; 

    cout<<stairs(n);
}