#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int MOD = 1e9 + 7;
const int N = 3 * 1e5 + 5;

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

ll ncr(int n, int r) {
    if(r > n) return 0;

    return fact[n] * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}

ll npr(int n, int r) {
    if(r > n) return 0;

    return fact[n] * inv_fact[n-r] % MOD;
}

void solve() {
    ll n,m,q;
    cin >> n >> m >> q;
    vector<ll> v(n),p(n + 1,0), s(n + 1, 0);
    map<ll, vector<ll>> diff;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i <= n; i++) {
        p[i] = p[i - 1] + v[i - 1];
    }

    for(int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + v[n - i];
    }

    ll g = 0;
    for(int i = 1; i <= n; i++) {
        if(p[i] == s[i]) g++;
        ll d = p[i] - s[i];
        diff[d].push_back(i);
    }
    
    auto f=[&](ll d, ll l, ll r) {
        if(!diff.count(d)) return 0LL;
        return (ll)(upper_bound(diff[d].begin(), diff[d].end(), r) - 
        lower_bound(diff[d].begin(), diff[d].end(), l));
    };
    while(q--) {
        ll i,val;
        cin >> i >> val;

        ll khujbo = 0, l = 1,r=n;
        if(i < n + 1 - i) {
            khujbo = -val;
            l = i;
            r = n - i;
        } else if(i > n + 1 - i) {
            khujbo = val;
            l = n + 1 - i;
            r = i - 1;
        }
        // cout << khujbo << f(0,l,r) << f(khujbo, l, r) nl;
        ll c= g - f(0,l,r) + f(khujbo, l, r);
        cout << ncr(c - 1, m - 1) nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}