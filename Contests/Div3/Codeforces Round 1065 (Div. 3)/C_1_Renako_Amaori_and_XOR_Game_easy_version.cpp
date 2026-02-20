#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    int ax = 0, bx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ax ^= a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        bx^= b[i];
    }

    if(ax == bx) {
        cout << "Tie\n";
        return;
    }
    
    int last = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] ^ b[i]) last = i;
    }
    if(last & 1) cout << "Mai\n";
    else cout << "Ajisai\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}