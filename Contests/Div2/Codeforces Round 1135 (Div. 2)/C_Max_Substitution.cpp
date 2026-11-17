#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const ll MOD = 1e9 + 7;

ll power(ll x, ll n) {
    ll ans = 1;
    while(n) {
        if(n & 1) {
            ans = (ans * x) % MOD;
        }

        n >>= 1;
        x = (x * x) % MOD;
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int cnt = 1;
    for(int i = 0; i < n; i++) {
        if(v[i] == v[ i + 1]) break;

        cnt = (cnt + power(v[i] - 1, i + 1)) % MOD;
    }
    cout << cnt nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}