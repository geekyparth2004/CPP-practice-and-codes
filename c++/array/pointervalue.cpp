#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,2,6};

    int *ptr = &arr[0];

    cout<<ptr<<endl;

    ptr[2] = 8; 

    &ptr = 11;

    for(int i = 0;i<=4;i++)
    {
        cout<<ptr[i]<<endl;
    }
}



