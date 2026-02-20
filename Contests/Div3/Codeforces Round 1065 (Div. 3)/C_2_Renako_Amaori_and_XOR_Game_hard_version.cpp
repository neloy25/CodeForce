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

    for(int k = 20; k >= 0; k--) {
        int ax = 0, bx = 0;
        for(int i = 0; i < n; i++) {
            ax ^= (a[i] & (1LL << k));
            bx ^= (b[i] & (1LL << k));
        }
        if(ax == bx) {
            continue;
        }
        
        int last = -1;
        for(int i = 0; i < n; i++) {
            if((a[i] & (1LL << k)) ^ (b[i] & (1LL << k))) last = i;
        }
        if(last & 1) cout << "Mai\n";
        else cout << "Ajisai\n";
        return;
    }

    cout << "Tie\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}