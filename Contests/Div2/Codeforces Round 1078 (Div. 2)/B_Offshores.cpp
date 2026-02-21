#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll diff = x - y;
    vector<ll> v(n);
    ll cnt = 0, mx = 0, mxid = -1;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        ll tmp = v[i] % x + diff * (v[i] / x);
        if(tmp >= mx) {
            mxid = i;
            mx = tmp;
        }

        cnt += (v[i] / x);
    }
    // cout << mxid nl;
    cnt -= (v[mxid] / x);

    ll res = v[mxid] + cnt * y;
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