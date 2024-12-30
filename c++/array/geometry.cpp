#include<iostream>
#include<iomanip>
using namespace std; 

float geometry_sum(float n)
{
    float sum = 0; 

    for(int i = 1 ; i <= n ; i++)
    {
        sum += 1.000000/i;
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<fixed<<setprecision(6)<<geometry_sum(n);
}
