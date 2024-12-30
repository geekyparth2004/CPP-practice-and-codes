#include<iostream>
using namespace std; 
bool power(int n)
{
    if(n==1)  return true;
    if(n%2!=0)  return false;

   return power(n/2); 


}
int main()
{
   int n; 
   cin>>n; 

   power(n); 
}