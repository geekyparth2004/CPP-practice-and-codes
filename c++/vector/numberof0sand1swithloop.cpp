#include<iostream>
#include<vector>
using namespace std;
int display(vector <int> c)
{
    for(int i=0;i<c.size();i++)
    {
     cout<<c[i];
    }

}

int main()
{
    vector <int> v;

    int count = 0;
    int county = 0;
    
    cout<<"Enter the value";
    
    for(int i=0;i<5;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int j=0;j<v.size();j++)
    {
        if(v.at(j)==0)
        {
            count++;
        }

        else{

            county++;
        }

        
    }

    for(int l=0;l<count;l++)
    {
        v[l] = 0;
    }

    for(int m=count+1;m<v.size();m++)
    {
        v[m] = 1;
    }

    display(v);



}