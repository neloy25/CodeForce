#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n, s, x;
    cin >> n >> s >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s-=v[i];
    }

    if(s >= 0 && s % x == 0) yes;
    else no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}