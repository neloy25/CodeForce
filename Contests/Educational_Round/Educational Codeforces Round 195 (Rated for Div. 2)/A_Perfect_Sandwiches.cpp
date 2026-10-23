#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll a,b,ans = -1;
    cin >> a >> b;

    while(a >= 2 && b >= 1 && a > b) {
        ans++;
        a-=2;
        b-=1;
    }
    if(ans != -1) ans++;
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}