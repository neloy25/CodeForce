#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    ll zero = 0, one = 0;
    for(char c : s) {
        if(c == '1') zero++;
        else one++;
    }

    ll c = max(zero, one);

    ll r = min(c + k, n);

    ll sum = 1 + (r * (r + 1)) / 2 + ((n - r) * (n - r + 1)) / 2;
    cout << sum nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}