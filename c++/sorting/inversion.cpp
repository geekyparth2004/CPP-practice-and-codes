#include <bits/stdc++.h>
using namespace std;

int c = 0;

int inversion(vector<int>&a , vector<int>&b)
{
    int count = 0;

    int i = 0; // for a
    int j = 0; // for b

    while(i<a.size() && j < b.size())
    {
        if(a[i]>b[j]){
            count += (a.size()-i); 
            j++;
        }

        else i++;
    }

    return count;
}

void merge(vector<int> &v, vector<int> &a, vector<int> &b)
{
    int m = a.size();
    int o = b.size();
    int i = 0, j = 0, k = 0;

    while (i < m && j < o)
    {
        if (a[i] < b[j]) 
            v[k++] = a[i++];
        else
            v[k++] = b[j++];
    }

   
    while (i < m)
        v[k++] = a[i++];

    while (j < o)
        v[k++] = b[j++];
}

void mergesort(vector<int> &v)
{
    int n = v.size();
    if (n <= 1) 
        return;

    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = v[n1 + i]; 
    }

    mergesort(a);
    mergesort(b);
    
    // inversion 

    c+=inversion(a,b); 

    merge(v, a, b); 
}

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(0);

    mergesort(v);

    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    cout<<c; 

    return 0;
}