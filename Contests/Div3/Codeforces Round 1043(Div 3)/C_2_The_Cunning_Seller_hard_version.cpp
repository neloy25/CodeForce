#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;

        ll tmp = n, d = 0;
        vector<int> dig;
        while (tmp > 0) { int r = tmp % 3; d += r; dig.push_back(r); tmp /= 3; }

        if (d > k) { cout << -1 << '\n'; continue; }
        if (n <= k) { cout << 3 * n << '\n'; continue; }

        ll m = min(k, n);
        if ((m - d) & 1) --m;
        if (m < d) { cout << -1 << '\n'; continue; }
        ll S = (m - d) / 2;

        int E = (int)dig.size() - 1;
        vector<ll> pw(E + 2, 1);
        for (int i = 1; i <= E + 1; ++i) pw[i] = pw[i - 1] * 3;

        vector<ll> eq(E + 1, 0);
        eq[0] = 3;
        for (int e = 1; e <= E; ++e) eq[e] = pw[e + 1] + (ll)e * pw[e - 1];

        ll C0 = 0;
        for (int e = 0; e <= E; ++e) if (e < (int)dig.size()) C0 += (ll)dig[e] * eq[e];

        if (S == 0) { cout << C0 << '\n'; continue; }

        vector<ll> A(max(0, E), 0);
        ll nextA = 0;
        for (int j = E - 1; j >= 0; --j) {
            ll Aj = (ll)dig[j + 1] + 3 * nextA;
            A[j] = Aj;
            nextA = Aj;
        }

        ll delta = 0;
        for (int j = E - 1; j >= 0 && S > 0; --j) {
            ll take = min(S, A[j]);
            delta += take * pw[j];
            S -= take;
        }

        cout << C0 - delta << '\n';
    }
}
