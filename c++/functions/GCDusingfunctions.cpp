#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int i;
    int c;
    for(i=1;i<=max(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            c = i;
        }
    }

    return c;
}

int main()
{
    int a;
    int b;
    int c;

    cout<<"Enter the value of two number whose GCD you have to find";
    cin>>a>>b;

    c = gcd(a,b);

    cout<<"GCD of the value is"<<c;

}
