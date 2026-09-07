#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pii pair<ll,ll>
#define vpii vector<pii>
const int MOD = 1e9 + 7;
const int N = 2 * 1e5 + 5;

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

ll on(ll n, ll k) {
    return ((n >> k) & 1);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<array<ll,3>> range(m);
    vector<vpii> bits(33);
    for(int i = 0; i < m; i++) {
        cin >> range[i][0] >> range[i][1] >> range[i][2];
    }

    sort(range.begin(), range.end());
    for(int i = 0; i < m; i++) {
        auto [l,r,x] = range[i];
        for(int j = 0; j < 32; j++) {
            if(!on(x,j)) bits[j].push_back({l,r});
        }
    }

    ll ans = 0;
    for(ll i = 0; i <=31; i++) {
        ll prevl = 1, prevr = 0,zero = 0;
        if(bits[i].size() == m) continue;
        for(auto [l,r] :bits[i]) {
            if(l > prevr) {
                zero+= prevr - prevl + 1;
                prevl = l;
                prevr = r;
            } else {
                prevr = r;
            }
        }
        zero+= (prevr - prevl + 1);
        ll one = n - zero;
        if(one == 0) continue;
        ll x = 0, y = 0;
        for(int i = 0; i<= zero; i++) {
            y = (y % MOD + ncr(zero,i) % MOD) % MOD;
        }

        for(int i = 1; i <= one; i+= 2) {
            x = (x % MOD + ncr(one,i) % MOD) % MOD; 
        }
        ans = (ans % MOD + (((((1 << i) % MOD) * x) % MOD) * y) % MOD) % MOD;
    }
    // cout nl;
    cout << ans nl;

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