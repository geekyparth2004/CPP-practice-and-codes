#include<iostream>
#include<algorithm>
#include<vector>
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
    int i;
    int j;
    vector<int> v;

    cout << "Enter the values for vector v: ";
    
    for(i = 0; i < 5; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    vector<int> s;

    cout << "Enter the values for vector s: ";
    
    for(j = 0; j < 5; j++)
    {
        int val;
        cin >> val;
        s.push_back(val);
    }

    vector<int> m;

    for(i = 0; i < 5; i++)
    {
        m.push_back(v[i]);
    }

    for(j = 0; j < 5; j++)
    {6
        m.push_back(s[j]);
    }

    sort(m.begin(), m.end());

    cout << "Vector v: ";
    display(v);

    cout << "Vector s: ";
    display(s);

    cout << "Merged and sorted vector m: ";
    display(m);

    return 0;
}
