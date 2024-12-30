#include<iostream>
using namespace std;
int triangle(int x)
{
    int i,j;

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*\n";
        }
    }

}

int main()
{
    int a;

    cout<<"Enter the value of how much time you want to print triangle :";
    cin>>a;

    triangle(a);
}