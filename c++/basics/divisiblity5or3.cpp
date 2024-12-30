#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    if(n%5==0||n%3==0)
    {
        cout<<"The number is divisble with 5 or 3";
    }

    else
    {
        cout<<"The number is not divisble with 5 or 3";
    }
    
    return 0;

}
