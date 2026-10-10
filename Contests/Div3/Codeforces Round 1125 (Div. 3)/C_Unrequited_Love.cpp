#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<ll,ll> feq;
    ll ans = 0;
    for(int i = 0; i < n - 4; i++) {
        ll val = v[i] + v[i + 2] - v[i + 4]; 
        ans+= feq[val];
        feq[val]++;

        if(i >= 2 && v[i - 2] + v[i] - v[i + 2] == val) {
            ans--;
        }

        if(i >= 4 && v[i - 4] + v[i - 2] - v[i] == val) {
            ans--;
        }
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