#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 0) cnt++;
    }

    if(cnt < 2) {
        cout << -1 nl;
        return ;
    }

    int ans = 0;
    if(v[0] && v[n -1]) ans = 2;
    else if(v[0] || v[n - 1]) ans = 1;
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