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

    for(int i = 0; i < n ; i++)
    {
        if(i%2==0) q.pop(); 
        else{
            int x = q.front(); 
            q.pop();
            q.push(x); 
        }
    }

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}