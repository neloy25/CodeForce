#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<ll> chk;
    for (int i = 0; i < n; i++) {
        if (i == 0 || b[i] != b[i - 1]) {
            chk.push_back(b[i]);
        }
    }
    int idx = 0;
    for (int i = 0; i < n && idx < chk.size(); i++) {
        if (a[i] == chk[idx]) {
            idx++;
        }
    }

    if (idx == chk.size()) {
        yes;
    } else {
        no;
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