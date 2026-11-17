#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n), res(n);
    map<ll,ll> fq;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        fq[v[i]]++;
    }
    ll l = 0, r = n - 1, cnt = 0;
    for(auto [key, val] : fq) {
        if(val == 1) {
            res[l++] = key;
            fq[key]--;
        } else {
            res[l++] = key;
            res[r--] = key;
            cnt += val - 2;
            fq[key] -= 2;
        }
    }
    cout << n - cnt nl;
    for(auto [key , val] : fq) {
        for(int i = 0; i < val; i++) {
            res[l++] = key;
        }
    }
    for(int val : res) {
        cout << val << " ";
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