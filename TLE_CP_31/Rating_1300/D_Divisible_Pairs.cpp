#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<ll,map<ll,ll>> feq;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll rem_y = v[i] % y;
        ll rem_x = v[i] % x;

        ll need = (x - rem_x) % x;
        ans += feq[rem_y][need];
        feq[rem_y][rem_x]++;
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