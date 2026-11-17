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
    ll fq= 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        if(v[i] >= 3) {
            yes;
            return;
        }
        if(v[i] == 2) fq++;
    }
    if(fq >= 2) {
        yes;
    } else {
        no;
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