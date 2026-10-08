#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n), feq(1005,0);
    ll mx = 0,ele,sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
        if(feq[v[i]] > mx) {
            ele = v[i];
            mx = feq[v[i]];
        }
        sum+= v[i];
    }
    // cout << mx << " " << ele nl;
    ll other = n - mx;

    if(mx - other > 2) {
        sum -= (mx - other - 2) * ele;
    }
    cout << sum nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}