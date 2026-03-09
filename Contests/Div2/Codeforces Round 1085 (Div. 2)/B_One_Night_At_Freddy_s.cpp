#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, m, l;
    cin >> n >> m >> l;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    v[0] = 0;
    vector<ll> powers(min(m, n + 1) , 0);
    ll st = max(1LL,n - m + 2);
    ll idx = 1;
    for(ll i = 1; i <= l; i++) {
        powers[0]++;
        sort(powers.begin(), powers.end());

        // for(int val : powers) {
        //     cout << val << " ";
        // }
        // cout nl;

        if(i == v[idx]) {
            // cout << i << " " << idx << " " << st nl;
            if(idx >= st) powers.pop_back();
            else powers[powers.size() - 1] = 0;
            idx++;
        }
        sort(powers.begin(), powers.end());
    }
    cout << powers[0] nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}