#include<iostream>
#include<vector>
#include<climits> 
using namespace std; 
int find(vector <int> &v ,int n , int idx , int val)
{
    if(idx==n) return -1;

    if(v[idx]==val)  return idx;

    return find(v,n,idx+1,val); 

}

int main()
{
    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(1); 
    v.push_back(4);
    v.push_back(5); 

    cout<<find(v,v.size(),0,2); 
}