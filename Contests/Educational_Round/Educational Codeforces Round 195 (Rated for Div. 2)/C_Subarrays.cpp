#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, deque<pair<ll,ll>>> mp;
    map<ll,ll> feq;
    map<ll,ll> add;
    vector<int> pre(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++) {
        pre[i] = (pre[i - 1] + v[i - 1]) % k;
    }

    ll ans = 0;
    for(int i = 0; i <= n; i++) {
        int val = pre[i];
        feq[val]++;
        mp[val].push_back({feq[val],i});

        while(!mp[val].empty() && i - mp[val].front().second > k) {
            add[val] = mp[val].front().first;
            mp[val].pop_front();
        }
        ans += add[val];
    }
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