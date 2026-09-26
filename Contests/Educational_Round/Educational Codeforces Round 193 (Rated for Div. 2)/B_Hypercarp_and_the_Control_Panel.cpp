#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'



void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto score = [&] (int x, int y) {
        return (v[x] != v[y]);
    };
    ll prev = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] != prev) sum++;
        prev = v[i];
    }

    ll ans = sum;
    for(int i = 0; i < n - 1; i++) {
        ll bef = 0, af = 0;
        if(i >= 1) {
            bef += score(i - 1, i);
            af += score(i - 1, i + 1);
        }
        if(i < n - 2) {
            bef+= score(i+1, i + 2);
            af+= score(i, i + 2);
        }
        ans = max(ans, sum - bef + af);
    }
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