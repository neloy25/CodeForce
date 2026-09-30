#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> feq(101,0);
    ll mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
        mx = max(mx, feq[v[i]]);
    }

    vector<ll> res;
    for(int i = 0; i < mx; i++) {
        for(int j = 100; j > 0; j--) {
            if(feq[j] > 0) {
                res.push_back(j);
                feq[j]--;
            }
        }
    }
    for(int val : res) {
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