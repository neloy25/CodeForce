#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto ok = [&] (ll k) {
        ll can = x;
        vector<ll> tmp = v;
        // cout << v[1] - v[0] << k nl;
        if(tmp[1] - tmp[0] > k) {
            tmp[0] = tmp[0] + k;
            can--;
        }
        // cout << can nl;
        for(int i = 1; i < n; i++) {
            if(tmp[i] - tmp[i - 1] <= k) {
                continue;
            }
            if(i + 1 < n && tmp[i + 1] - tmp[i] <= k) {
                continue;
            }

            tmp[i] = tmp[i] + k;
            can--;
            if(can < 0) return false;
        }
        
        return can >= 0;
    };
    // cout << ok(1) nl;
    ll l = 1, r = 1e9 + 10, ans = 1e9 + 10;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if(ok(mid)) {
            // cout << mid nl;
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}