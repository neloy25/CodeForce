#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<ll> fq(26,26);

    ll l = 0, r = n - 1;
    while(l <= r) {
        if(s[l] != s[r]) {
            ll mn = min(s[l] - 'a', s[r] - 'a');
            ll mx = max(s[r] - 'a', s[l] - 'a');
            fq[mx] = min(fq[mx], mn);
        }
        l++;
        r--;
    }

    ll prevr = 25, ans = 0;
    for(ll i = 25; i >= 0; i--) {
        if(fq[i] != 26) {
            ans += max(0LL, min(i, prevr) - fq[i]);
            prevr = min(prevr, fq[i]);      
        }
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