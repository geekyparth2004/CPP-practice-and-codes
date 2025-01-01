#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> value(vector <int> &v)
{
    reverse(v.begin(),v.end()); 

    
    return v; 
}


int main()
{
    int n; 
    cin>>n; 

    vector<int> v(n); 

    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }

    vector <int> ans = value(v); 

    for(int i = 0 ; i < n ; i++)
    {
        cout<<ans[i]<<" ";
    }
}