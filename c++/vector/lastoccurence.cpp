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

    cout<<"Enter the values :";

    for(int i=0;i<5;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    int x;
    cout<<"Value you want to search :";
    cin>>x;

    for(int j=5;j>=0;j--)
    {
        if(v[j]==x)
        {
            cout<<"Your value at "<<j<<" indices";
            break;
        }

    }

    

    
}