#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll g = a[0];
    for (int i = 1; i < n; i++) g = gcd(g, a[i]);

    for (ll x = 2; x <= 50; x++) {
        if (gcd(g, x) == 1) {
            cout << x << "\n";
            return;
        }
    }

    ll ans = 53;
    for (ll p : {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47}) {
        if (g % p != 0) {
            ans = p;
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
