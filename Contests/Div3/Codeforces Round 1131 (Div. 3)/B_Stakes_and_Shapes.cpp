#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll p,r,s;
    cin >> p >> r >> s;
    ll m = max({p,r,s});
    char c;
    if(m == p) {
        c = 'P';
    } else if(m == r) {
        c = 'R';
    } else {
        c = 'S';
    }

    for(int i = 0; i < p + r + s; i++) {
        cout << c;
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