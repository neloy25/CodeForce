#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pii pair<ll,ll>
#define vpii vector<pii>

void solve() {
    ll n,p;
    cin >> n >> p;
    vpii v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].second;
    }

    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
    }

    sort(v.begin(), v.end());

    int i = 0;
    ll res = p;
    ll rem = n - 1;
    while(rem > 0 && i < n && v[i].first < p) {
        res += v[i].first * min(v[i].second, rem);
        rem -= min(v[i].second, rem);
        i++;
    }
    res += p * rem;
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}