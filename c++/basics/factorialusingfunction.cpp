#include<iostream>
using namespace std;
int factorial(int a)
{
    int i,fact=1;

    for(i=1;i<=a;i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    cout<<"Enter the number :";
    cin>>n;

    cout<<"Your factorial number is ="<<factorial(n)<<endl;
}