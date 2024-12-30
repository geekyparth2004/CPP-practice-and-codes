#include <iostream>
using namespace std;
int main()
{
    int n;
    char x;

    cout<<"Enter the marks :";
    cin>>n;

    x = (n>=33)?"Pass":"Fail";

    cout<<x;

}

