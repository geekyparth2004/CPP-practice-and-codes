#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> c)
{
    for(int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }
    cout << endl;
}
int main()
{   
    vector <int> v;

    for(int i = 0;i<6;i++)
    {
        int temp;
        cin>>temp;

        v.push_back(temp);
    }


    vector <int> begin;

    for(int j = 0;j<3;j++)
    {
        begin.push_back(v[j]);
    }

    vector <int> end;

    for(int l = 3;l<6;l++)
    {
        end.push_back(v[l]);
    }

    sort(begin.begin(),begin.end());

    sort(end.begin(),end.end());

    vector <int> s;

    for(int m=0;m<3;m++)
    {
        s.push_back(begin[m]);
    }
    
    for(int o=0;o<3;o++)
    {
        s.push_back(end[o]);
    }

    sort(s.begin(),s.end());

    display(s);

    }