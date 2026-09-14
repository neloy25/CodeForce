#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]) one++;
        else zero++;
    }
    if(one >= zero) {cout << "Bessie" nl;}
    else {cout << "Elsie" nl;}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}