#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    map<ll,ll> mp;

    for(int i = 0; i < n; i++) {
        if(mp[v[i] - 1] > 0) {
            mp[v[i] - 1]--;
        }
        mp[v[i]]++;
    }

    ll res = 0;
    for(auto [key, val] : mp) {
        res+= val;
    }
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}