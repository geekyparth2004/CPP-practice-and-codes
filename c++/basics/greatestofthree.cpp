#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Give three numbers :";
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {
        cout<<"A is greatest";

    }

         if(a<c)
        {
            cout<<"C is greatest";
        }

    

    else
    {
        cout<<"B is greatest";
    }
    return 0;
}