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
    vector<ll> b(n);
    ll p = 0,m = 0;
    for (int i = 0; i < n; i++) {
        if(i % 2) {
            b[i] = v[i];
            p++;
        } else {
            b[i] = -v[i];
            m++;
        }
    }
    sort(b.begin(), b.end());    

    ll ans = 0;
    for (int i = 0; i < m; i++){ 
        ans-= b[i];
    }
    for (int i = m; i < n; i++) {
        ans+= b[i];
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