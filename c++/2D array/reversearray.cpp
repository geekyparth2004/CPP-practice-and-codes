#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{
    int n = 4;

    vector<vector<int> > v;

    for(int i = 0 ; i < n ; i++)
    {
        vector<int> val; 

        for(int j = 0 ; j < 2 ; j++)
        {
            int input; 
            cin>>input;
             
        }

        v.push_back(val); 
    }  

    for(int i = 0; i < n ; i++)
    {
        reverse(v[i].begin(),v[i].end());
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            cout<<v[i][j];
        }
    }
}