#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
    string s = "abcdabbc"; 
    int i = 0;
    char val;

    while(i<s.length())
    {
        val = s[i];

        s.erase(s.begin()+i); 

        if(s.find(val)!=string::npos)
        {
            reverse(s.begin(),s.end());
            i = 0;
        }

        else{
            s.insert(i,1,val);
            i++;
        }
    }

    cout<<s;
}