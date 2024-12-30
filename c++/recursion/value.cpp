#include<bits/stdc++.h>
using namespace std; 
int nto1(int n)
{
    if(n==0) return 0; 
    cout<<n<<endl;
    nto1(n-1);
} 




int main()
{
    nto1(5);
}
