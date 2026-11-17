#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> c;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c.push_back(a[i]);
        c.push_back(a[i] - 1);
        c.push_back(a[i] + 1);
    }
    ll m;
    cin >> m;
    vector<ll> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
        c.push_back(b[i]);
        c.push_back(b[i] - 1);
        c.push_back(b[i] + 1);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll x = LLONG_MIN,y = 0,ans LLONG_MIN;
    for(ll val : c) {
        ll a1 = upper_bound(a.begin(), a.end(), val) - a.begin();
        ll s1 = a1 * 2 + ((n - a1 ) * 3);
        ll b1 = upper_bound(b.begin(), b.end(), val) - b.begin();
        ll s2 = b1 * 2 + ((m - b1 ) * 3);

        // cout << val << " " << s1 << " " << s2 nl;
        if((s1 - s2) > ans || ((s1 - s2) == ans && s1 > x)) {
            ans = s1 - s2;
            x = s1;
            y = s2;
        }
    }
    cout << x << ":" << y nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}