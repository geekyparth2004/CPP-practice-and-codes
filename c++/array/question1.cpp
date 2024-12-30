#include<bits/stdc++.h>
using namespace std; 
int ratfood(int r , int unit , vector <int> &arr)
{
    if(arr.size()==0) return -1; 

    int amount = r*unit; 
    int sum = 0; 
    for(int i = 0 ; i < arr.size() ; i++)
    {
        sum += arr[i]; 
        if(amount<=sum) return i+1; 
    }

    return 0;
}
int main()
{
    int r = 7 ;  // Number of rats present
    int unit = 2; 

    vector <int> v;

    v.push_back(2);
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);

    cout<<ratfood(r,unit,v); 

}