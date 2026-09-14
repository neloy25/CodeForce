#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
int mod = 998244353;
const ll N = 2 * 1e5 + 6;
ll fact[N];

void precompute() {
    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    ll ans = 0;
    ll sum = v[0];

    for(int i = 1; i < n; i++) {
        // cout << fact[i - 1] nl;
        ans = ((ans * i) % mod + (sum * fact[i - 1]) % mod - (fact[i] * v[i]) % mod + mod) % mod;
        sum= (sum + v[i]) % mod;
    }
    cout<< ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int t;
    cin >> t;
    while(t--) solve();
}