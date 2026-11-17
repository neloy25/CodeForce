#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(2 *n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        v[n + i] = v[i];
    }

    auto ok = [&] (ll x) {
        vector<ll> tmp = v;
        for(int i = 0; i < 2 * n - 1; i++) {
            if(tmp[i] - tmp[i + 1] > x) tmp[i + 1] = tmp[i] - x;
        }

        for(int i = 2 * n - 2; i >= 0; i--) {
            if(tmp[i + 1] - tmp[i] > x) tmp[i] = tmp[i + 1] - x;
        }
 
        ll can = k;
        for(int i = 0; i < n; i++) {
            can -= max(tmp[i], tmp[i + n]) - v[i];
            if(can < 0) return false;
        }
        return true;
    };
    // cout << ok(4) nl;
    ll l = 0, r = 1e12, ans = 1e12;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if(ok(mid)) {
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