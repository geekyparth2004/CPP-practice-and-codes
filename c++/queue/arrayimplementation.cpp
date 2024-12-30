#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    
    int n = q.size(); 

    vector <int> v; 

    for(int i = 0 ; i < n ; i++)
    {
        v.push_back(q.front());
        q.pop();
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << " ";
    }

    return 0; 
}