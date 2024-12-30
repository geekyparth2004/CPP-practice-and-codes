#include <iostream>
using namespace std;
int main()
{
    int r,a,c;

    cout<<"Find the radius of the circle :";
    cin>>r;

    a = 3.14 * r * r;
    
    c = 2 * 3.14 * r;

    if(a>c)
    {
        cout<<"Area is greater than circumference";
    }

    else 
    {
        cout<<"Circumference is greater than area";
    }


}