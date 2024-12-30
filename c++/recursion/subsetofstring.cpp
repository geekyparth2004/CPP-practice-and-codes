#include<iostream>
#include<string>
#include<vector>
using namespace std; 
void subset(string s , string ans)
{
    if(s.length()==0){
        cout<<ans<<endl;
        return; 
    }

    char val = s[0]; 

     subset(s.substr(1),ans+val);
     subset(s.substr(1),ans); 
}

int main()
{
    string s = "str";
    string ans = "";  
    subset(s,ans);
}