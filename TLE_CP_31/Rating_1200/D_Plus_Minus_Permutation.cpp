#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a,b);
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll m = n / x - n / lcm(x,y);
    ll p = n / y - n / lcm(x,y);

    ll sum = (m * (2 * n - m + 1)) / 2 - (p * (p + 1)) / 2;
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