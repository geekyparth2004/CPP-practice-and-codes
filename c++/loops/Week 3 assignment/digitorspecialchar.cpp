#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the charecter :";
    cin>>ch;

    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')
    {
        cout<<"It is an alphabet";

    }

    else if(ch>= '1' && ch<='9')
        {
            cout<<"It is an digit";
        }

    

    else
    {
        cout<<"It is a special charecter";
    }
    return 0;
}