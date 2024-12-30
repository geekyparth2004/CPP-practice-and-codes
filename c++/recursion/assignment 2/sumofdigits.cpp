#include<iostream>
using namespace std;
void sumofdigits(int n , int sum)
{
    // base case
    if(n==0){
        cout<< sum;
        return;
    }

    sumofdigits(n/10,sum+n%10);  // recursive call

  
}

int main()
{
    int n; 
    cin>>n;

    int sum  = 0; 

   sumofdigits(n,sum); 
}
