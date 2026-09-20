#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll sum(ll n,ll a, ll d) {
    return (n * (2 * a - (n - 1) * d)) / 2;
}

void solve() {
    ll x,y,k;
    cin >> x >> y >> k;
    
    ll diff = (y / x) - 1;
    ll ans = 0;
    while(diff > 0 && k > 0) {
        ll a = y % x;
        ll n = (a / diff) + 1;

        // cout << x << " " << y << " ";
        // cout << a << " " << min(k, n) << " "<< diff nl;
        ans += sum(min(k,n),a,diff);
        y += min(k, n);
        x += min(k, n);
        k-= min(k, n);
        diff = y / x - 1;
    }
    // cout << x << " " << y << " " << ans nl;
    ans += (k) * (ll)(y % x);
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