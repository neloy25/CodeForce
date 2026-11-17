#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(i != 0) {
            mx = max(mx, abs(v[i] - v[i - 1]));
        }
    }

    auto ok = [&] (ll x) {
        vector<ll> tmp = v;
        ll l = -1, r = -1;
        for(int i = 0; i < n - 1; i++) {
            ll diff = abs(v[i] - v[i + 1]);
            if(diff > x) {
                if(l == -1) {
                    l = i + 1;
                } else if(r == -1) {
                    r = i;
                } else{
                    return false;
                }
            }
        }
        // cout << l << " " << r nl;
        if(l == -1 && r == -1) return true;
        else if(r != -1) {
            for(int i = l; i <= r; i++) {
                tmp[i] = 2 * v[i];
            }

            reverse(tmp.begin()+ l, tmp.begin() + r + 1);
            for(int i = 0; i < n - 1; i++) {
                ll diff = abs(tmp[i] - tmp[i + 1]);
                if(diff > x) {
                    return false;
                }
            }
            return true;
        }

        for(int r1 = l; r1 < n; r1++) {
            ll t = 0;
            if(r1 != l) {
                ll d= abs(v[r1] - v[r1 - 1]);
                if(2 * d > x) break;
            }
            if(r1 != n - 1) {
                t = max(t, abs(v[r1 + 1] - 2 * v[l]));
            }
            t = max(t, abs(2 * v[r1] - v[l - 1]));
            if(t <= x) return true;
        }
        r = l - 1;
        for(int l1 = r; l1 >= 0; l1--) {
            ll t = 0;
            if(l1 != r) {
                ll d= abs(v[l1] - v[l1 + 1]);
                if(2 * d > x) break;
            }
            if(l1 != 0) {
                t = max(t, abs(v[l1 - 1] - 2 * v[r]));
            }
            t = max(t, abs(2 * v[l1] - v[r + 1]));
            if(t <= x) return true;
        }
        return false;
    };

    // cout << ok(2) nl;
    ll l = 0, r = mx + 1, ans = mx;
    while(l <= r) {
        ll mid = (r + l) / 2;

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