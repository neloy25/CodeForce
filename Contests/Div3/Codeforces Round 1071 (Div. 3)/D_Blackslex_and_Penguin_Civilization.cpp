#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
void solve() {
    int n;
    cin >> n;

    vector<ll> perm = {1, 0};

    for (ll i = 2; i <= n; i++) {
        vector<ll> odd, even;
        for (ll x : perm) odd.push_back(2 * x + 1);
        for (ll x : perm) even.push_back(2 * x);
        sort(even.begin(), even.end());
        perm.clear();
        for(int x : odd) perm.push_back(x);
        for(int x : even) perm.push_back(x);
    }

    for (ll x : perm) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
