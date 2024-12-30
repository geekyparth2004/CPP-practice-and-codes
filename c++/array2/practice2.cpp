#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int sumOfArray(int N, vector<int>& A) {
    for (int i = 0; i < N; ++i) {
        int maxElem = *max_element(A.begin(), A.begin() + i + 1);
        A[i] = gcd(A[i], maxElem);
    }

    sort(A.begin(), A.end());
    vector<int> B;

    for (int i = 0; i < N / 2; ++i) {
        B.push_back(gcd(A[i], A[N - 1 - i]));
    }

    return accumulate(B.begin(), B.end(), 0);
}

int main()
{
    int n; 
    cin>>n;

    vector<int>a(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    cout<<sumOfArray()
}