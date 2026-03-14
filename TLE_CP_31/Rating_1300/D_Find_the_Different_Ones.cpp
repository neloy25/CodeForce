#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n + 1), pos(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    pos[1] = -1;
    for(int i = 2; i <= n; i++) {
        if(v[i] != v[i - 1]) pos[i] = i - 1;
        else pos[i] = pos[i - 1];
    }

    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;

        if(pos[r] >= l) cout << pos[r] << " " << r nl;
        else cout << "-1 -1\n";
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