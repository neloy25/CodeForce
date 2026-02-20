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

    if(v[0] == -1 && v[n - 1] == -1) {
        v[0] = 0, v[n - 1] = 0;
    } else if(v[0] == -1) v[0] = v[n -1];
    else if(v[n - 1] == -1) v[n -1] = v[0];

    cout << abs(v[0] - v[n -1]) << endl;
    for(int val : v) {
        if(val == -1) cout << 0 << " ";
        else cout << val << " ";
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