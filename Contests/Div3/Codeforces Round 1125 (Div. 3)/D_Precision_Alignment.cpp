#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;

    vector<array<ll, 3>> v(n);

    ll mn = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];

        ll sum = v[i][0] + v[i][1] + v[i][2];
        mn = min(mn, sum);
    }

    auto ok = [&](ll x) {
        ll used = 0;

        for (int i = 0; i < n; i++) {
            auto [a, b, c] = v[i];
            ll sum = a + b + c;
            if (sum >= x)
                continue;

            ll need = x - sum;
            if (a == b && b == c)
                return false;

            ll cost;
            if (a <= b && b <= c) {
                ll q1 = b - a + 1;
                ll q2 = c - b + 1;

                ll q = min(q1, q2);
                cost = need + 2 * q;

            } else {
                cost = need;
            }

            used += cost;

            if (used > k)
                return false;
        }

        return true;
    };

    ll l = mn;
    ll r = mn + k;
    ll ans = mn;

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}