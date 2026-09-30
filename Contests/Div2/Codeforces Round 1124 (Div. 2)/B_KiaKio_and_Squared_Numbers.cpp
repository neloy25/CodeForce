#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll sum_sq_dig(ll n) {
    ll ans = 0;

    while (n != 0) {
        ll r = n % 10;
        ans += r * r;
        n /= 10;
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    vector<ll> res4(8, 0);
    ll res1 = 0;

    for (int i = 0; i < n; i++) {
        ll k = v[i];
        int j = 0;

        while (k != 1 && k != 4) {
            k = sum_sq_dig(k);
            j++;
        }
        if (k == 4) res4[j % 8]++;
        else res1++;
    }

    ll ans = 0;
    for (int i = 0; i < 8; i++) {
        ll a = res4[i];
        if (a != 0) ans += (a * (a - 1)) / 2;
    }
    if (res1 != 0) ans += res1 * (res1 - 1) / 2;
    cout << ans nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}