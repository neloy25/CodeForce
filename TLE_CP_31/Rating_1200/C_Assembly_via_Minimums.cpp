#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,mx = 0;
    cin >> n;
    ll sum = (n * (n - 1)) / 2;
    vector<ll> v(n), b(sum);
    map<ll,ll> feq;
    for(int i = 0; i < sum; i++) {
        cin >> b[i];
        feq[b[i]]++;
        mx = max(mx, b[i]);
    }

    v[0] = mx;
    ll idx = n - 1;
    for(auto [key,val] : feq) {
        while(val > 0) {
            v[idx] = key;
            val-= idx;
            idx--;
        }
    }
    for(ll val : v) {
        cout << val << " ";
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