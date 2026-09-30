#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int N = 1e6 + 9;
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

void solve() {
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> primes;
    while(x > 1) {
        int temp = spf[x];
        // cout << temp nl;

        while(x % temp == 0) {
            x /= temp;
        }
        primes.push_back(temp);
    }

    ll ans = 0;
    for(int p : primes) {
        ll tmp = 0;
        for(int i = 0; i < n; i++) {
            if(gcd(p,v[i]) > 1) tmp += v[i];
        }
        ans = max(ans, tmp);
    }
    cout<< ans nl;
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