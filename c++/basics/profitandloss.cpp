#include<iostream>
using namespace std;
int main()
{
    float c,s,p,l,diff;

    cout<<"Cost price of the value :";
    cin>>c;

    cout<<"Selling price of the value :";
    cin>>s;

    diff = s - c; 

    if(diff<0)
    {
        cout<<"You had a Loss of = "<<-1 * diff;
    }

    else
    {
        cout<<"You had a Profit of ="<<diff; 
    }

    



     
}
