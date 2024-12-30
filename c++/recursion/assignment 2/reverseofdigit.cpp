#include<iostream>
using namespace std; 
void reverse(int n , int rev)
{
    // base case
    if(n==0){
        cout<<rev; 
        return;
    }

    // recursive case

    reverse(n/10, rev*10 + n%10); 

}


int main()
{
    int n; 
    cin>>n; 

    int rev = 0; 

    reverse(n,rev); 
}