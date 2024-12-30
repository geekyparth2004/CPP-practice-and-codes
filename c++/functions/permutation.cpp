#include<iostream>
using namespace std;
int fact(int x)
{
    int factorial = 1;
    for (int i = 2;i<x;i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}

int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    int r;
    cout<<"Enter the value of r :";
    cin>>r;

    int l = n-r;

    int nfact = fact(n);
    int lfact = fact(l);

    int result = (nfact)/(lfact);

    cout<<"Permutation of the value ="<<result<<endl;
}
