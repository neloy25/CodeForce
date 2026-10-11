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

    ll ans = v[0];                 
    ll mx = v[0], mn = v[0];     

    for(int i = 1; i < n; i++) {
        ans = max({ans, v[i], v[i] - mx, v[i] + mx});
        ans = max({ans, v[i], v[i] - mn, v[i] + mn});

        ll p1 = mx + (v[i]);
        ll p2 = mx + (v[i] - mx);
        ll p3 = mx + (v[i] + mx);

        ll q1 = mn + (v[i]);
        ll q2 = mn + (v[i] - mn);
        ll q3 = mn + (v[i] + mn);

        mx = max({p1, p2, p3, q1, q2, q3});
        mn = min({p1, p2, p3, q1, q2, q3});
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