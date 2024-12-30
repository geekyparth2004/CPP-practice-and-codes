#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the year :";
    cin>>n;

    if(n%4==0)
    {
        cout<<"Leap Year";
    }

    else{
        cout<<"Not a leap year";
    }

}