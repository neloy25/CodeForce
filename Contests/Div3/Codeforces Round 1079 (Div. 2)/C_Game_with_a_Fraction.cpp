#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll p, q;
    cin >> p >> q;

    ll diff = abs(p - q);
    if(p < q && 3 * diff <= q) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
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