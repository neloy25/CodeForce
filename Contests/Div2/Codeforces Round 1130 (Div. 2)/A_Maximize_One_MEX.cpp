#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll mex(vector<ll> &v, ll n, ll k) {
    vector<int> mx;
    set<ll> s(v.begin(), v.end());
    s.insert(n);
    for(int i = 0; i< n; i++) {
        s.erase(v[i]);
        mx.push_back(*s.begin());
    }
    sort(mx.begin(), mx.end(), greater<int>());
    return mx[k - 1];
}
void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = mex(v,n,k);
    pair<ll,ll> res = {-1,-1};
    for(int l = 0; l < n; l++) {
        for(int r = l + 1; r < n; r++) {
            vector<ll> tmp = v;
            swap(tmp[l], tmp[r]);
            ll val = mex(tmp, n, k);
            if(val > ans) {
                res = {l + 1, r + 1};
                ans = val;
            }
        }
    }

    if(res.first == -1) {
        cout << -1 nl;
    } else {
        cout << res.first << " " << res.second nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}