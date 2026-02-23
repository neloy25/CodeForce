#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> p(v);
    sort(p.begin(), p.end());
    if(p == v) {
        cout << -1 nl; return;
    }

    ll mn = INT_MAX, mx = 0;
    for(int i = 0; i < n; i++) {
        mx = max(mx, p[i]);
        mn = min(mn, p[i]);
    }
    ll res = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(p[i] != v[i]) {
            ll tmp = max(mx - v[i], v[i] - mn);
            res = min(res, tmp);
        }
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