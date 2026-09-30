#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n),feq(17,0);
    vector<ll> add = {0, 3, 5, 6, 9, 10, 12, 15};
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }
    int res = 0;
    for(int val : add) {
        res+= feq[val];
    }
    cout << res << " ";
    while(q--) {
        int p, x;
        cin >> p >> x;
        feq[v[p- 1]]--;
        feq[x]++;
        v[p- 1] = x;
        res = 0;
        for(int val : add) {
            res+= feq[val];
        }
        cout << res << " ";
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