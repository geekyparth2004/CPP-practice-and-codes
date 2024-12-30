#include<iostream>
using namespace std; 
int main()
{
    int a = 80; 
    int *p; 
    p = &a; 
    cout<<*p;

    int b = 30 ; 
    int *s; 
    s = &b; 
    cout<<*s;

    int c = a+b; 
    int *sum; 
    sum = &c;

    cout<<*sum;   
}
