#include<iostream>
#include<vector>
using namespace std; 
int main()
{

    int a[] = {1,2,3,4,5,6}; 

    int size = sizeof(a)/sizeof(a[0]); 

    vector <int> v(a,size+a); 

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]; 
    } 
}