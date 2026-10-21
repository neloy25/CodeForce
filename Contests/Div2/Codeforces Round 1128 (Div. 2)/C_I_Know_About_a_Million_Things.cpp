#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    ll odd = 0, even = 0;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] & 1) odd++;
        else even++;
    }

    if(odd == 1 && even == 1) {
        cout << "Larpity\n";
    } else if(odd == 3 && even == 0) {
        cout << "Larpity\n";
    } else {
        cout << "Moggity\n";
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