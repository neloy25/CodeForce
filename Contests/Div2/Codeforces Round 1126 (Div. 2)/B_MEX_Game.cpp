#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> feq(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }

    for(int i = 0;i <= n; i++) {
        if(feq[i] == 2 * k - 1) {
            yes;
            return;
        } else if(feq[i] < 2 * k - 1) {
            no;
            return;
        }
    }
    no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}