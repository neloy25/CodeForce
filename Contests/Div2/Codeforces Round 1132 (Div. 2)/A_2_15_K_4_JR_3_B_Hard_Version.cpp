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
    sort(v.rbegin(), v.rend());
    ll a = 0, b = 0;
    
    for(int i = 0; i < n; i++) {
        if(a <= b) {
            a+= (1 << v[i]);
        } else {
            b+= (1 << v[i]);
        }
    }

    cout << a * b nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}