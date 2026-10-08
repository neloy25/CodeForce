#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pii pair<ll,ll>
#define vpii vector<pii>

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> st(n);
    for(auto &x : st) cin >> x;

    vector<vector<ll>> a(n, vector<ll>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = m;
    multiset<ll> dmg;

    for(int i = n - 1; i >= 0; i--) {
        for(ll x : a[i]) {
            dmg.insert(x);
            if(dmg.size() > m) dmg.erase(dmg.begin());
        }

        ll sum = 0;
        int cnt = 0;

        for(auto it = dmg.rbegin(); it != dmg.rend(); it++) {
            sum += *it;
            cnt++;

            if(sum >= st[i]) {
                ans = min(ans, cnt);
                break;
            }
        }
    }

    cout << ans nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}