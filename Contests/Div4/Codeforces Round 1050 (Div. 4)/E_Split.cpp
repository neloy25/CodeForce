#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> total(n + 1, 0);
        for (int x : a) total[x]++;

        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (total[i] % k != 0) { ok = false; break; }
        }
        if (!ok) {
            cout << 0 << '\n';
            continue;
        }

        vector<int> quota(n + 1, 0);
        for (int i = 1; i <= n; i++) if (total[i]) quota[i] = total[i] / k;

        vector<int> cnt(n + 1, 0);
        ll ans = 0;
        int l = 0;
        for (int r = 0; r < n; r++) {
            cnt[a[r]]++;
            while (cnt[a[r]] > quota[a[r]]) {
                cnt[a[l]]--;
                l++;
            }
            ans += (r - l + 1);
        }
        cout << ans << '\n';
    }
    return 0;
}
