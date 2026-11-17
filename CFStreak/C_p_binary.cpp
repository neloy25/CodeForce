#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, p;
    cin >> n >> p;

    for(ll k = 1; k <= 32; k++) {
        ll need = n - k * (p);
        if(need <= 0 || need < k) continue;
        ll cnt = __popcount(need);
        if(cnt <= k) {
            cout << k nl;
            return;
        }
    }
    cout << -1 nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}