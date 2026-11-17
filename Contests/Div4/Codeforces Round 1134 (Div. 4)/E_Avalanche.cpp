#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> tmp(n+ 1,0), s(n+ 1);

    tmp[0] = 0;
    tmp[1] = 1;
    tmp[2] = 1;
    s[0] = 0;
    s[1] = 1;
    for(int i = 2; i <= k; i++) {
        // tmp[i] = (1 << (i - 2));
        s[i] = (s[i - 1] + tmp[i]) % 2;
    }

    for(int i = k + 1; i <= n; i++) {
        tmp[i] = (s[i-1] - s[i - k - 1] + 2) % 2;
        s[i] =( s[i - 1] + tmp[i]) % 2;
    }

    ll con = 0;
    for(int i = 0; i < n; i++) {
        con += v[i] * s[i + 1];
    }
    if(con & 1) cout << "Alice\n";
    else cout << "Bob\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}