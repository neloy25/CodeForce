#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    // int l = 6;
    if(x > y) swap(x,y);
    if(a > b) swap(a,b);
    // for(int i = 0; i <= l; i++) {
    //     ll val1 = a * i + (l - i) * b;
    //     ll val2 = b * i + (l - i) * a;
    //     // cout << val1 << " " << val2 nl;
    // }
    // cout  nl;
    auto ok = [&] (ll l) {
        auto eq1 = [&](ll i) {
            return a * i + (l - i) * b;
        };

        auto eq2 = [&](ll i) {
            return b * i + (l - i) * a;
        };

        ll l1 = 0, r1 = l, ans = -1; 
        while(l1 <= r1) {
            ll mid = (l1 + r1) / 2;

            if(eq1(mid) <= x) {
                r1 = mid - 1;
                ans = mid;
            } else {
                l1 = mid + 1;
            }
        }
        if(ans == -1) return false;
        // cout << ans nl;
        return (eq2(ans) <= y); 
    };

    // cout << ok(11);
    ll l1 = 0, r1 = x + y + 100, ans = 0; 
    while(l1 <= r1) {
        ll mid = (l1 + r1) / 2;

        if(ok(mid)) {
            l1 = mid + 1;
            ans = mid;
        } else {
            r1 = mid - 1;
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