#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int N = 2 * 1e5+ 9;

vector<int> primes;
bool is_prime[N];
int spf[N];

void sieve() {
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i * i < N; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
  for (int i = 2; i < N; i++) {
    if (spf[i] == i) {
      primes.push_back(i);
    }
  }
}

ll dp[N];
int vis[N];
int timer = 0;

ll rec(ll x, vector<ll> &p, ll k, ll m) {
    if(x <= k) return 0;

    if(vis[x] == timer)
        return dp[x];

    ll ans = LLONG_MAX;

    for(int val : p) {
        if(x % val == 0) {
            ans = min(ans, rec(x / val, p, k, m));
        }
    }

    ans += m / x;

    vis[x] = timer;
    return dp[x] = ans;
}

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(auto &x : v) {
        cin>> x;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll x = v[i];
        vector<ll> p;
        while(x != 1) {
            ll tmp = spf[x];

            while(x % tmp == 0) {
                x /= tmp;
            }

            p.push_back(tmp);
        }

        ++timer;
        ans += rec(v[i], p, k, v[i]);
    }

    cout << ans nl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}