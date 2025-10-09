#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MOD 1000000007

int n,k,d;
vector<ll> v;
ll dp[105][105];

ll ktree(ll sum, ll mx) {
    if (sum < 0) return 0;
    if (sum == 0) return (mx >= d);

    if(dp[sum][mx] != -1) return dp[sum][mx];

    ll total = 0;
    for (ll val : v) {
        if(sum >= val) total = (total + ktree(sum - val, max(mx, val))) % MOD;
    }
    dp[sum][mx] = total;
    return dp[sum][mx];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k >> d;
    memset(dp, -1, sizeof(dp));

    for(int i = 1; i<= k;i++) {
        v.push_back(i);
    }

    cout << ktree(n,0) % MOD << endl;
    return 0;
}

