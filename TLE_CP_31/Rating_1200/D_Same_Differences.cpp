// aj - ai = j - i
// (ai - i) = aj - j


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

    map<ll,ll> mp;
    ll res = 0;
    for(int i = 0; i< n; i++) {
        ll need = v[i] - i;
        res += mp[need];
        mp[need]++;
    }
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