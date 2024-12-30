#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size();

    cout<<v[0];

 
}