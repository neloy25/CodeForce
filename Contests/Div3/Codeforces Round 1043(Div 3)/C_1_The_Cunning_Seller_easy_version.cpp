#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll eq(int x) {
    if (x == 0) return 3;
    ll p = 1, q = 1;
    for (int i = 0; i < x + 1; i++) p *= 3;
    for (int i = 0; i < x - 1; i++) q *= 3;
    return p + x * q;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> pw;
    pw.push_back(1);
    while (pw.back() <= 1e9) pw.push_back(pw.back() * 3);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll res = 0;
        while (n > 0) {
            int val = upper_bound(pw.begin(), pw.end(), n) - pw.begin() - 1;
            ll p = pw[val];
            int mul = n / p;
            res += 1LL * mul * eq(val);
            n %= p;
        }
        cout << res << "\n";
    }
}
