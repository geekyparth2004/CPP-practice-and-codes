#include <bits/stdc++.h>

using namespace std;

int numWays(int N, int K) {
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[1][K] = 1;
    
    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            dp[i][j] = 0;
            if (j > 1) {
                dp[i][j] += dp[i - 1][j - 1];
            }
            if (j < i) {
                dp[i][j] += dp[i - 1][j];
            }
        }
    }
    
    return dp[N][K];
}

int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    cout<<numWays(n,k);
}
