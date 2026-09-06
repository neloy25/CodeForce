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
    int a = 0,b = 0, c = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] & 1) {
            a++;
        } else {
            v[i] = v[i] / 2;
            if(v[i] & 1) b++;
            else c++;
        }
    }
    cout << max({a,b,c}) << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}