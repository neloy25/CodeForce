#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        ans+= v[i];
    }

    int cnt = 0;
    // cout << k nl;
    for(int i = 0; i < k - 1; i++) {
        if(i > n - i - 1) ans -= max(v[i], v[n - i - 1]);
        else ans -= min(v[i], v[n - i - 1]);
        cnt++;
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}