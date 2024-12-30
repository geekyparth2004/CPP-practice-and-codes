#include<iostream>
#include<vector>
using namespace std;
int display(vector <int> c)
{
    for(int i=0;i<c.size();i++)
    {
     cout<<c[i];
    }

}

int main()
{
    vector <int> v;

    cout<<"Enter the value";
    
    for(int i=0;i<5;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    
}