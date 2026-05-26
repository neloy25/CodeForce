#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    auto ok = [&] (int k) {
        ll mn = 0, mx = 0;
        for(int i = 0; i < n; i++) {
            mn = mn - k;
            mx = mx + k;
            if(mx < a[i] || mn > b[i]) return false;
            mx = min(b[i], mx);
            mn = max(mn, a[i]);
            // cout << mn << " " <<mx nl;
        }
        return true;
    };

    int l = 0, r = 1e15;
    int ans = 1e15;
    while(l <= r) {
        int mid = (l + r) / 2;
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
}