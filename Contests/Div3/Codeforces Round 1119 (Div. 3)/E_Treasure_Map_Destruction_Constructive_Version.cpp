#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pii pair<ll,ll>
#define vpii vector<pii>

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vpii range;
    for(int i = 0; i < n; i++) {
        if(v[i] >= 1) {
            range.push_back({max(0LL,i - v[i] + 1),min(n - 1, i + v[i] - 1)});
        }
    }
    sort(range.begin(), range.end());

    ll prevr = -1;
    string res(n, '1');
    int c = 0;
    for(auto [l,r] : range) {
        for(ll i = max(prevr+1, l); i <= r; i++) {
            res[i] = '0';
            c++;
        }
        prevr = r;
    }
    for(int i = 0; i < n; i++) {
        if(v[i] != -1) {
            if(i - v[i] >= 0 && res[i - v[i]] == '1') continue;
            if(i + v[i] < n && res[i + v[i]] == '1') continue;
            else{
                cout << -1 nl;
                return;
            }
        }
    }
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