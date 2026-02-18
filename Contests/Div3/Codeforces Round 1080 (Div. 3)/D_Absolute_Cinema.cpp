#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> f(n);
    for(int i = 0; i < n; i++) {
        cin >> f[i];
    }
    vector<ll> a(n);

    for(int i = 1; i < n - 1; i++) {
        a[i] = (f[i - 1] + f[i + 1] - 2 * f[i]) / 2;
    }

    a[0] = f[n - 1], a[n - 1] = f[0]; 
    for(ll i = 1; i < n - 1; i++) {
        a[0] -= (n - i - 1)* a[i];
        a[n - 1] -= i * a[i];
    }
    a[0] /= (n - 1);
    a[n - 1] /= (n -1);
    for(ll val : a) {
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