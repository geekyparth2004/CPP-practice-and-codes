#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter the sides of the triangle :";
    cin>>a>>b>>c;

    if(a==b==c)
    {
        cout<<"Equilateral Triangle";
    }

    if(a==b||b==c||c==a)
    {
        cout<<"Isosceles Triangle";
    }

    else{
        cout<<"Scalene Triangle";
    }

}