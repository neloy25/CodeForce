#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
ll MOD = 998244353;

void solve() {
    ll l,r;
    cin >> l >> r;

    vector<ll> sum(65);

    sum[0] = 0;
    for(int i = 0; i < 63; i++) {
        sum[i + 1] = sum[i] + (1LL << i);
        // cout << (1LL << i) nl;
    }
    ll ans[4] = {0,1,3,2};
    ll res = 0;
    for(ll i = l; i <= r; i++) {
        ll x = i;
        ll mn = LLONG_MAX;
        ll prev = 0;
        while(true) {
            // cout << x << " " << prev nl;
            if(x <= 3) {
                mn = min(mn, prev + ans[x]);
                break;
            }
            auto it = lower_bound(sum.begin(), sum.end(), x);
            ll idx = it - sum.begin();
            ll top = *it;
            
            mn = min(mn, prev + idx + top - x);
            if(top == x) break;
            // cout << mn nl;
            prev += idx;
            idx--;
            x -= sum[idx] - 1;
        }
        // cout << mn nl;
        res = (res + mn) % MOD;
    }
    cout << res nl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}