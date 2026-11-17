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
    bool same = true;
    for(int i = 1; i < n;i++) {
        if(v[i] != v[i - 1]) {
            same = false;
            break;
        }
    }

    if(n <= 2 || same) {
        cout << -1 nl;
        return;
    }

    vector<ll> soja(v), ulta(v), tmp(v);
    sort(soja.begin(), soja.end());
    sort(ulta.begin(), ulta.end(), greater<ll>());

    auto is_sorted=[&](vector<ll> &a){
        return (a == soja) || (a == ulta);
    };

    if(is_sorted(v)) {
        ll prev = v[0];
        ll l = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == prev) {
                l = i;
            }
        }
        cout << l + 1 << " " << l + 2 nl;
        return;
    }

    ll l = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]) {
            l = i;
            break;
        }
    }
    swap(tmp[l], tmp[l - 1]);
    if(!is_sorted(tmp)) {
        cout << l << " " << l + 1 nl;
        return;
    }

    l = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] > v[i - 1]) {
            l = i;
            break;
        }
    }
    swap(v[l], v[l - 1]);
    if(!is_sorted(v)) {
        cout << l << " " << l + 1 nl;
        return;
    }
    cout << -1 nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}