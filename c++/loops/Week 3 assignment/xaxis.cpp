#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the points you want to add :";
    cin>>a>>b;

    if(a==0)
    {
        cout<<"X axis";

    }

         if(b==0)
        {
            cout<<"Y axis";
            
        }

    if(a==0 && b==0)
    {
        cout<<"Origin";
        
    }

}