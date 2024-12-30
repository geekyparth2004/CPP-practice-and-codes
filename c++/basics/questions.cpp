#include<iostream> 
using namespace std; 
int main()
{

  int nums; 

  cin>>nums; 

  int a[nums]; 

  if(nums == 1)
  {
    cout<< "0";
  }

  else{

  for(int i = 0 ; i<nums ; i++)
  {
    cin>>a[i];
  }

  
  int b[nums]; 

  for(int i = 0 ; i<nums ; i++)
  {
    cin>>b[i];
  }

  int diff[nums]; 

  for(int i = 0 ; i < nums ; i++)
  {
    diff[i] = b[i] - a[i];
  }

  int max = 0 ;
  int mindx = 0; 

  for(int i = 0 ; i < nums ; i++)
  {
    if(max<diff[i])
    {
      max = diff[i];
      mindx = i; 
    }
  }

  cout<<a[mindx];
  }

}