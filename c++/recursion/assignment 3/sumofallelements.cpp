#include<iostream>
#include<vector>
#include<climits> 
using namespace std; 
int sumofnum(vector <int> &v , int n , int idx , int sum)
{
    if(idx==n) return sum; 

    sum+= v[idx]; 

    return sumofnum(v,n,idx+1,sum); 
}

int main()
{
    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(1); 
    v.push_back(4);
    v.push_back(5); 

    cout<<sumofnum(v,v.size(),0,0);
}