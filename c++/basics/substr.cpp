#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector <string> v; 
    v.push_back("flow"); 
    v.push_back("flower"); 
    v.push_back("flight");

    // find minimum of the array 

    int mini = 0;
    string s = " ";  

    for(int i = 0 ; i < v.size() ; i++)
    {
        mini = min(mini,v[i]); 
    }

    // substring 

    for(int i = 0 ; i < mini ; i++)
    {
        if(v[i].substr(0,i)==v[i+1].substr(0,i)); 
        {
            s = s + v[i].substr(); 
            break; 
        }
    }

    cout<<s; 
}