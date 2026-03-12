#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll calc(vector<ll> &v, ll n) {
    ll a = 1, b = n - 1, res = 0;

    for(int i = 1; i < n; i++) {
        res += ((v[i] - v[i - 1]) * a * b);
        a++;
        b--;
    }
    return res;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ll val;
            cin >> val;
            v[j].push_back(val);
        }
    }

    ll res = 0;
    for(int i = 0;i < m; i++) {
        sort(v[i].begin(), v[i].end());
        res += calc(v[i], n);
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