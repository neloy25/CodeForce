#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> fq;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        fq[v[i]]++;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    ll m = v.size();
    vector<ll> pre(m ), suf(m);
    pre[0] = fq[v[0]];
    for(int i = 1; i < m; i++) {
        pre[i] = pre[i - 1] + fq[v[i]];
    }
    suf[m - 1] = fq[v[m - 1]];
    for(int i = m - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + fq[v[i]];
    }

    ll st = 0, end = m - 1;
    ll cost = 0,op = 0;
    while(st < end) {
        ll d1 = v[st + 1] - v[st];
        ll d2 = v[end] - v[end - 1];
        if(pre[st] < suf[end] || (pre[st] == suf[end]) && d1 > d2) {
            ll diff = v[st + 1] - v[st];
            cost += pre[st] * d1;
            suf[st + 1] = suf[st];
            st++;
            op+=d1;
        } else {
            ll diff = v[end] - v[end - 1];
            cost += suf[end] * d2;
            pre[end - 1] = pre[end];
            end--;
            op+=d2;
        }
    }
    cout << cost << " " << op nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}