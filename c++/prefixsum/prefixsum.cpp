#include<bits/stdc++.h>
using namespace std; 
vector <int> prefixsum(vector <int> &nums)
{
    int n = nums.size(); 

    vector <int> v(n);

    v[0] = nums[0]; 

    for(int i = 1 ; i  < n ; i++)
    {
        v[i] = v[i-1] + nums[i];
    } 

    return v;
}
int main()
{
    vector <int> nums; 

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3); 
    nums.push_back(4);
    nums.push_back(5);

    cout<<prefixsum(nums);
}