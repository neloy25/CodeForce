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

    vector<ll> a;
    a.push_back(v[0]);
    for(int i = 1;i < n; i++) {
        if(v[i] == v[i - 1]) continue;
        a.push_back(v[i]);
    }

    int res = a.size();
    
    int inc = 0, dec = 0;
    for(int i = 1; i < a.size(); i++) {
        if(a[i] - a[i - 1] > 0) {
            inc++;
            res -= max(0, dec - 1);
            dec=0;
        } else {
            dec++;
            res -= max(0, inc - 1);
            inc=0;
        }
        // cout << inc << " " << dec nl;
    }
    res -= max(0, dec - 1);
    res -= max(0, inc - 1);
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}