#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> res(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int val = v[i -1] + n + 1 - i; 
        if (val < 1 || val > n || res[val] != 0) {
            cout << -1 nl;
            return;
        } else {
            res[val] = i;
        }
        // cout << val << " " << res[val] nl;
    }

    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}