#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = 0, mn = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    if(mn == mx) {
        cout << mx nl;
        return;
    }

    ll diff = mn ^ mx;
    int msb = 63 - __builtin_clzll(diff);

    ll ans = mx | ((1LL << (msb + 1)) - 1);
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