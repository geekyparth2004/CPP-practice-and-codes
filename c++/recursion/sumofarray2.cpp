#include<iostream>
#include<vector>
using namespace std;
int sumofarray(vector <int> &v , int sum ,  int n , int i){
    if(i>v.size()-1) return 0;

    return v[i] + sumofarray(v,sum,n,i+1);
}


int main()
{
    vector <int> v; 
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<sumofarray(v,0,v.size(),0);
} 

