#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n: ";
    cin >> n;

    int a[n]; 
    int flag = true;

    cout << "Enter the values of a[n]: ";
    for(int s = 0; s < n; s++)
    {
        cin >> a[s];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            flag = false;
            
            

        }
    }

    if(flag)
    cout<<"Array is sorted";
    
    else{
        cout<<"Array is not sorted";
    }
    
   
}
