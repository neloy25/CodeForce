#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll cnt = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 1) cnt++;
        sum+=v[i];
    }

    if(cnt == n) {
        cout << -1 nl;
        return;
    }

    if(cnt == n - 1) {
        if(v[0] != 1 || v[n - 1] != 1) {
            cout << (sum - n + 1) nl;
            return;
        }
    }

    if(cnt == n - 2) {
        if(v[0] != 1 && v[n - 1] != 1) {
            cout << (sum - n + 1) nl;
            return;
        }
    }

    cout << sum - 1 nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}