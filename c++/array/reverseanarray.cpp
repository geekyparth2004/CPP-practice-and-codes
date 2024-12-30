#include<iostream>
#include<vector> 
using namespace std;
int main()
{

    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    for(int i = v.size()-1 ; i>=0 ; i--){

    rev.push_back(v[i]);
   }

    for(int i = 0 ; i < rev.size(); i++)
    {
        cout<<rev[i];
    }


}