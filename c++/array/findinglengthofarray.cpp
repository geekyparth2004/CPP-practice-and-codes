#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,5,6,7,8};

    int c = sizeof(a)/sizeof(a[0]);

    cout<<c;

}