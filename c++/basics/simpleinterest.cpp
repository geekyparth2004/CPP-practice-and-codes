#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;

    cout<<"Enter Principle Amount, rate and time = ";
    cin>>p>>r>>t;

    si = (p*r*t)/100;

    cout<<"Your Simple Interest = "<<si;

     return 0;

}

