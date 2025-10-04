#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 100005
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, k;
    cin >> t >> k;

    ll dp[N];
    ll pre[N];
    pre[0] = 0;
    dp[0] = 1;

    for(int i = 1; i < N; i++) {
        if(i >= k) dp[i] = (dp[i - 1] + dp[i - k]) % MOD;
        else dp[i] = dp[i - 1] % MOD;
    }

    for(int i = 1; i < N;i++) {
        pre[i] = (pre[i - 1] + dp[i]) % MOD;
    }

    while(t--) {
        int a,b;
        cin >> a >> b;
        if(a > b) swap(a,b);

        cout << (pre[b] - pre[a - 1] + MOD) % MOD << endl;
    }
    return 0;
}

