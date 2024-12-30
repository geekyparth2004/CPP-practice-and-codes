#include<iostream>
using namespace std;
int fun(int a, int b)
{
    int c = a + b;

    return c;
}
int main()
{
    int x,y,z;

    cout<<"Enter the number you want to add :";
    cin>>x>>y;

    z = fun(x,y);

    cout<<z;

    
}