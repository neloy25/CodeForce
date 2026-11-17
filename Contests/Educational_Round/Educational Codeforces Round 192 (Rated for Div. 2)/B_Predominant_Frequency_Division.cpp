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
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> f(n),s(n);
    ll c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == 1) c1++;
        else if(v[i] == 2) c2++;
        else c3++;
        f[i] = c1 - c2 - c3;
    }

    s[n - 1] = 0;
    c1 = 0, c2 =0, c3 = 0;
    for(int i = n - 2; i >= 0; i--) {
        if(s[i + 1] < 0) {
            c1 = 0;
            c2 = 0;
            c3 = 0;
        }
        if(v[i] == 1) c1++;
        else if(v[i] == 2) c2++;
        else c3++;

        s[i] = c1 + c2 - c3;
    }
    for(int i = 0; i < n - 2; i++) {
        if(f[i] >= 0 && s[i + 1] >= 0) {
            yes;
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