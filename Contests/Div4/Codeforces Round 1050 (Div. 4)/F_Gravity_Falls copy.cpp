#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define llv vector<ll>

ll id = 0;

bool cmp(llv &a, llv &b) {
    if (a.size() <= id || b.size() <= id) return a.size() > b.size();
    for (int i = id; i < min(a.size(), b.size()); i++) {
        if (a[i] != b[i]) return a[i] < b[i];
    }
    return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<llv> arr(n);

        ll sz = 0;
        for (ll i = 0; i < n; i++) {
            ll k;
            cin >> k;
            sz = max(sz, k);
            arr[i].resize(k);
            for (ll j = 0; j < k; j++) {
                cin >> arr[i][j];
            }
        }

        sort(arr.begin(), arr.end());
        vector<ll> ans(sz);

        for (id = 0; id < sz; id++) {
            if (id >= arr[0].size()) { 
                sort(arr.begin(), arr.end(), cmp);
            }
            ans[id] = arr[0][id];
        }

        for (auto x : ans) cout << x << " ";
        cout << endl;
    }
}
