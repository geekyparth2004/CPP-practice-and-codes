#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Give three numbers :";
    cin>>a>>b>>c;

    if(a<b&&a<c)
    {
        cout<<"A is least";

    }

         if(a>c)
        {
            cout<<"C is least";
        }

    

    else
    {
        cout<<"B is least";
    }
    return 0;
}