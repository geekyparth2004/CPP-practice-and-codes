#include<iostream>
#include<vector>
using namespace std;
int display(vector <int> c)
{
    for(int i=0;i<c.size();i++)
    {
     cout<<c[i]<<" ";
    }

}

int main()
{
    vector <int> v(5);
    vector <int> m(5);

    cout<<"Enter the value";
    
    for(int i=0;i<5;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int j=5;j<0;j--)
    {
        for(int l=0;l<5;l++)
        {
            m[l] == v[j];
        }

    }

    display(m);
    
}