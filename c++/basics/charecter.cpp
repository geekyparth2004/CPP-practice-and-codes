#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the charecter :";
    cin>>ch;

    int ascii = (int)ch;

    if((ascii>=97 && ascii<=122) ||(ascii>=65 && ascii<=90) )
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' )
        {
            cout<<"It is an alphabet";
        }

         else
    {
        cout<<"It is not an alphabet";
    }
    }

   

return 0;
}