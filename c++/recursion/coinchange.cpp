#include<iostream>
#include<vector>
using namespace std; 
int coinchange(vector <int> &v , int n , int sum)
{
    // base case 

    if(sum==0) return 1;
    if(sum<0 or n == 0) return 0;

    // recursive case

    return coinchange(v,n,sum-v[n-1]) + coinchange(v,n-1,sum); 
}

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3); 

    int sum = 10; 
    cout<<coinchange(v,v.size(),sum); 

}
