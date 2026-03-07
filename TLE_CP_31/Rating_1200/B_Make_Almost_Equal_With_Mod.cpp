#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
ll N = 1e18;
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(ll k = 2; k < 1e18; k <<= 1) {
        ll chk = v[0] % k;
        for(int i = 1; i < n; i++) {
            if(v[i] % k != chk) {
                cout << k nl;
                return;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}