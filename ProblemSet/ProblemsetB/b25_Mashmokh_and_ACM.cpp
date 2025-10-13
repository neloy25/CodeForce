#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;

    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));

    for(int i = 0; i <= n;i++) dp[1][i] = 1;
    
    for(int len = 2; len <= k;len++) {
        for(int d = 1; d <= n;d++) {
            for(int mul = d; mul <= n;mul+=d) {
                dp[len][mul] += dp[len - 1][d];
                if(dp[len][mul] >= MOD) dp[len][mul]-=MOD;
            }
        }
    }

    ll ans = 0;
    for(int i = 1; i<= n; i++) {
        ans+= dp[k][i];
        if(ans >= MOD) ans-=MOD;
    }

    cout << ans << endl;
    return 0;
}