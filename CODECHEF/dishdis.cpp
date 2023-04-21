#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int mod = 1e9+7;
        vector<int> a(m);
        vector<int> b(m);
        for (int i=0; i<m; i++) {
            cin >> a[i] >> b[i];
        }
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        dp[0][0] = 1;
        for (int i=1; i<=m; i++) {
            for (int j=0; j<=n; j++) {
                for (int k=a[i-1]; k<=b[i-1] && j>=k; k++) {
                    dp[i][j] = (dp[i][j] % mod + dp[i-1][j-k] % mod) % mod;
                }
            }
            
        }
        for(int i=0;i<=m;i++)
            {
                for(int j=0;j<=n;j++)
                {
                    cout<<dp[i][j]<<" ";
                }
                cout<<"\n";
            }
        cout << dp[m][n] << '\n';
    }
    return 0;
}