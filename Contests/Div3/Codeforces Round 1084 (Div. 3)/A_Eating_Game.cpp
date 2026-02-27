#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> feq(11,0);
    ll res = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
        res = max(res, v[i]);
    }

    cout << feq[res] nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}