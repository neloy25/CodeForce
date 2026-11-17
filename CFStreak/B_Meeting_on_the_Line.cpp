#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define nl << '\n'
#define pii pair<ld,ld>
#define vpii vector<pii>

void solve() {
    ll n,mx = 0;
    cin >> n;
    vector<ll> v(n),t(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        mx = max(mx, t[i]);
    }

    auto ok = [&](ld ans) {
        ld canl= 0, canr = LLONG_MAX;
        for(int i = 0; i < n; i++) {
            ld move = ans - t[i];
            canl= max(canl, v[i] - move);
            canr = min(canr, v[i] + move);
        }
        return (canl <= canr);
    };

    ld l = mx, r = 1e12;
    ld ans = r,ansl, ansr;
    ld eps = 1e-6;
    while(r - l > eps) {
        ld mid = (l + r) / 2;
        if(ok(mid)) {
            r = mid;
            ans = mid;
        } else {
            l = mid;
        }
    }
    ld canl= 0, canr = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        ld move = ans - t[i];
        canl= max(canl, v[i] - move);
        canr = min(canr, v[i] + move);
    }
    cout<< fixed << setprecision(6) << canl nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}