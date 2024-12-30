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
    cout<<"Enter the values :";

    for(int i=0;i<5;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    int x;
    cout<<"Enter the number ";
    cin>>x;
    
    for(int j=0;j<5;j++)
    {
        for(int l=0;l<5;l++)
        {
            if(v[j] + v[l] == x)
            {
                cout<<"The doublets are "<<v[j]<< "and "<<v[l]<<endl;
            }
        }
        
    }
    

    
}