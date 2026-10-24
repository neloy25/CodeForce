#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> feq(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }

    ll rem = 0;
    for(int i = 0; i <= n; i++) {
        if(feq[i] < 1 || rem + feq[i] < k) {
            cout << i nl;
            return;
        }
        // cout << rem << " " << feq[i] - k nl;
        rem += (feq[i] - k);
    }
    cout << n nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}