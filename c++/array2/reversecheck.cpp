#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector <int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7); //  1 2 3 4 5 6 7

    for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;
    reverse(nums.begin(),nums.end());
    
    for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    reverse(nums.begin()+3,nums.end());

     for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;

    reverse(nums.begin(), nums.end()+3);

     for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;
}