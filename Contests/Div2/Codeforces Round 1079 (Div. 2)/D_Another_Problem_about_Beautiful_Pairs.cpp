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

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int d = v[i]; d <= min(n, v[i]*v[i]); d+=v[i]) {
            if(i + d < n && v[i] * v[i + d] == d) cnt++;
            if(i - d >= 0 && v[i] * v[i - d] == d && v[i] != v[i - d]) cnt++;
        }
    }

    cout << cnt nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}