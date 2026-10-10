#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<ll> suf(n);
    suf[n - 1] = (a[n - 1] == b[n - 1]);
    for (int j = n - 2; j >= 0; j--)
        suf[j] = suf[j + 1] + (a[j] == b[j + 1]) + (b[j] == a[j + 1]);

    ll res = 0;
    ll pre = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, pre + suf[i]);
        pre += (a[i] == b[i]);
        if(i + 1 < n) pre+= (b[i] == a[i + 1]);
    }

    cout << 2 * n - 1 + res << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}