#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingnumber(vector<int>& v){
  int n = v.size();
  sort(v.begin(), v.end());
for(int i = 0; i < n; i++) {
  if(v[i] != i) return i;   
} 
  return n;
}
int main(){
  int n; 
  cout<<"Enter the size of the array: ";
  cin>>n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int val;
    cin>>val;
    v.push_back(val);  
  }

   cout<< missingnumber(v);
}
