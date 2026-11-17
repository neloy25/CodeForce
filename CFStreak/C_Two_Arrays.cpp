#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

ll fact[N], inv_fact[N];

ll bin_expo(ll a, ll b) {
    if(b == 0) return 1;

    ll x = bin_expo(a, b / 2);
    x = (x * x) % MOD;

    if(b & 1) x = (x * a) % MOD;

    return x;
}

void precompute() {
    fact[0] = 1;

    for(int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[N-1] = bin_expo(fact[N-1], MOD - 2);

    for(int i = N-2; i >= 0; i--) {
        inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
    }
}

ll ncr(ll n, ll r) {
    if(r > n) return 0;

    return fact[n] * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}

ll npr(ll n, ll r) {
    if(r > n) return 0;

    return fact[n] * inv_fact[n-r] % MOD;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    cout << ncr(n + 2 * m - 1, 2 * m) nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    solve();

    return 0;
}