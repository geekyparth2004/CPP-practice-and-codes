#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector <int> a;

    cout<<"Enter the value of n";

    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;

        a.push_back(temp);
    }

    int sum = 0;
    int x = 1;
    for(int j = 4;j>=0;j--) 
    {
        sum += a[j] *  x; 

        x *= 2;
    }

    cout<<sum;


}

