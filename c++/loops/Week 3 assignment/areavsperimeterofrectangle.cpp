#include <iostream>
using namespace std;
int main()
{
    int l,w,a,p;

    cout<<"Find the lenght and width of the circle :";
    cin>>l>>w;

    a = l*w;
    
    p = 2*(l+w);

    if(a>p)
    {
        cout<<"Area is greater than Perimeter";
    }

    else 
    {
        cout<<"Perimeter is greater than area";
    }


}