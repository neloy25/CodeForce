#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> fq;
    map<ll,ll> res;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        fq[v[i]]++;
    }
    vector<ll> b(v);
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    if(b[0] != 0) {
        cout << -1 nl;
        return;
    }
    if(b.size() == 1) {
        if(b[0] == 0) {
            for(int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout nl;
        }
        else cout << -1 nl;
        return;
    }

    ll last=LLONG_MIN;
    for(int i = 1; i < b.size(); i++) {
        if((b[i] - b[i -1]) % fq[b[i-1]] != 0) {
            cout << -1 nl;
            return;
        }
        ll cur = (b[i] - b[i - 1]) / fq[b[i - 1]];
        if(cur <= last) {
            cout << -1 nl;
            return;
        }
        last = cur;
        res[b[i - 1]] = last;
    }
    res[b[b.size() - 1]] = last + 1;
    for(int i = 0; i < n; i++) {
        cout << res[v[i]] << " ";
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