#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n);
    ll oa = 0, ob = 0, ea = 0, eb = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) ea++; 
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] % 2 == 0) eb++; 
    }

    if(ea == eb) yes;
    else if(eb > ea && k % 2 == 0) yes;
    else if(eb < ea && k % 2 == 1) yes;
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