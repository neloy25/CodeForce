#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll calc(vector<ll> &v, ll n) {
    priority_queue<ll> pq;
    ll prev = 0;

    for(int i = 0; i < v.size(); i++) {
        ll diff = v[i] - prev - 1;
        prev = v[i];
        pq.push(diff);
    }
    pq.push(n - prev);

    if(!pq.empty()) {
        ll f = pq.top();
        pq.pop();
        pq.push((f - 1) / 2);
        pq.push(f / 2);
    }

    return pq.top();
}

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    vector<vector<ll>> pos(k + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        pos[v[i]].push_back(i);
    }

    ll res = LLONG_MAX;
    for(int i = 1; i <= k; i++) {
        ll val = calc(pos[i], n);
        res = min(res, val);
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