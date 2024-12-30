#include<iostream>
#include<vector>
using namespace std;

void change(vector <int> & c)
{
    c.at(0) = 4;
}
int main()
{
    vector <int> v;
    
    cout<<"Enter the values";
    for(int i = 0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    change(v);

    for(int j=0;j<v.size();j++)
    {
        cout<<v.at(j);
    }

}