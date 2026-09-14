#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define pii pair<ll,ll>
#define vpii vector<pii>

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n+ 1);
    vector<bool> ans(n,true);
    vpii ranges;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        if(v[i] * i >= n) continue;
        ranges.push_back({v[i] * i, min(n,(v[i] + 1) * i) - 1});
    }
    sort(ranges.begin(), ranges.end());
    ll prev_r = -1;
    for(auto [l,r] : ranges) {
        for(ll i = max(l,prev_r); i <= r; i++) {
            ans[i] = false;
        }
        prev_r = r;
        if(r >= n) break;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(ans[i]) cnt++;
    }
    cout << cnt nl;
    for(int i = 0; i < n; i++) {
        if(ans[i]) cout << i << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}