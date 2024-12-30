#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

    sort(v.begin(),v.end());

    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
}
return 0;


