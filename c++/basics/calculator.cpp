#include <iostream>
using namespace std;
int main()
{
    float n,x,i;
    char ch;

    for(i=1;i<=100;i++)
    {

    cout<<endl<<"Enter the two numbers :";
    cin>>n>>x;

    cout<<endl<<"What you want to do :";
    cin>>ch;

    switch(ch)
    {
        case '+':
        cout<<n+x;
        break;

        
        case '-':
        cout<<n-x;
        break;

        
        case '*':
        cout<<n*x;
        break;

        
        case '/':
        cout<<n/x;
        break;

        default:
        cout<<"Calcultor hu bewakoof nhi !!";
    }

    }

}