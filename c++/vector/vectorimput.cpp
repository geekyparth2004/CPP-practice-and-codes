#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Input the value using vectors 

    vector <int> v;
    int i;
    for(i=0;i<5;i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    for(i=0;i<5;i++)
    {
        cout<<v[i]<<"";


    }

    

}