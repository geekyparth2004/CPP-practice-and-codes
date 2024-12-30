// Inventory Managment 
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter what you want to do";
    cin>>n;

    switch(n)
    {
        case 1:
        cout<<inventory();

        case 2:
        cout<<"delete any item";
        cout<<delete();

        case 3:
        cout<<"Insert any item";
        cin>>insert();
    }

}