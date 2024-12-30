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

    int n = q.size(); 

    for(int i = 0; i < n ; i++)
    {   int m = q.front();
        cout<<q.front()<<endl;
        q.pop();

        q.push(m);
    }
}