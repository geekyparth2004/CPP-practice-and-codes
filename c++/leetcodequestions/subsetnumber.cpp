#include<iostream>
using namespace std; 
int main()
{
    int j = 0; 
    int a1[] = {1,2,4,5,6,7}; 
    int a2[] = {2,4,9}; 
    int n = sizeof(a1)/sizeof(a1[0]); 
    int m = sizeof(a2)/sizeof(a2[0]);

    while(j <m)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(a2[j]==a1[i]) j++; 
        }
    }

    if(j==m) cout<<"Yes"; 
    else cout<<"No";
}
    