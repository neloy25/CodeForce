#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> v(n);
    priority_queue<ll> pq;
    ll sum = 0; 
    ll ans = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < m - 1; i++) {
        pq.push(v[i]);
        sum+= v[i];
    }
    for(int i = m - 1; i< n; i++) {
        ans = max(ans, m * v[i] - sum);
        if(!pq.empty() && v[i] < pq.top()) {
            int val = pq.top();
            pq.pop();
            sum = sum + v[i] - val;
            pq.push(v[i]);
        }
    }
    cout<< ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}