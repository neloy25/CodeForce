#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> pos(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i; 
    }

    int fixed = !(n & 1);
    int prev = pos[n] & 1;
    for(int i = n; i>= 1; i--) {
        if((i & 1) == fixed) {
            // cout << i << " " << pos[i] << " " << prev nl;
            if((pos[i] & 1) == prev) {
                no;
                return;
            }
        }
        prev = pos[i] & 1;
    }
    yes;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}