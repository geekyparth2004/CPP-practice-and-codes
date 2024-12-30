#include<iostream>
#include<vector>
using namespace std;

void reverse(vector <int> &v, int idx)
{
    if(idx < v.size())
    {
        reverse(v, idx + 1);
        cout << v[idx] << " ";
    }
}

int main()
{
    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(1); 
    v.push_back(4);
    v.push_back(5); 

    reverse(v, 0);
    return 0;
}

