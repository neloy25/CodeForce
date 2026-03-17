#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const ll N = 2 * 1e5 + 5;
ll fact[N];
const ll MOD = 998244353;

void factorial() {
    fact[0] = 1;

    for(int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
}

void solve() {
    string s;
    cin >> s;

    char prev = '*';
    ll cnt = 1;
    ll n = s.size(), k = 0;
    ll ans = 0, res = 1;
    for(int i = 0; i < n; i++) {
        if(s[i] == prev) {
            cnt++;
        }
        else {
            k++;
            res = (res * cnt) % MOD;
            cnt = 1;
        }
        prev = s[i];
    }
    ans = n - k;
    res = (res * cnt) % MOD;

    res = (res * fact[n - k]) % MOD;
    cout << ans << " " << res nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    factorial();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}