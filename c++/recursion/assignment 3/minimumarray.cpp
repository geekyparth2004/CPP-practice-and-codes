#include<iostream>
#include<vector>
#include<climits> 
using namespace std; 
int mini(vector <int> &v ,int n , int idx , int minim)
{
    if(idx==n) return minim;

    if(minim>v[idx])  minim = v[idx];

    return mini(v,n,idx+1,minim); 

}

int main()
{
    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(1); 
    v.push_back(4);
    v.push_back(5); 

    cout<<mini(v,v.size(),0,INT_MAX); 
}