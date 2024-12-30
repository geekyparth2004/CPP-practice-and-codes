#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int add;

    add = a+b;

    return add;
}

int main()
{
    int n1,n2;

    cout<<"Enter the first and second number";
    cin>>n1>>n2;

    cout<<"Your sum of the number is "<<sum(n1,n2);
}