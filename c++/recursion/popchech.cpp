#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    vector <int> v; 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v.size(); 

    v.pop_back(); 

    cout<<v.size(); 
}