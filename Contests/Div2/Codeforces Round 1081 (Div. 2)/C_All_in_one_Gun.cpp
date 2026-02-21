#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, h, reload;
    cin >> n >> h >> reload;
    vector<ll> v(n), mx(n + 1);
    ll sum = 0, res = 0, mn = INT_MAX;
    mx[n]= 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    ll t = (h - 1) / sum;
    res += n * t + reload * t;
    h = h % sum;
    if(h == 0) h = sum;

    for(int i = n - 1; i >= 0; i--) {
        mx[i] = max(v[i], mx[i + 1]);
    }
    sum = 0;
    for(int i = 0; i < n; i++) {
        mn = min(v[i], mn);
        sum+= v[i];

        if(sum >= h) {
            t = i + 1;
            break;
        }
        if(sum - mn + mx[i + 1] >= h) {
            t = i + 1;
            break;
        }
    }
    cout << res + t nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}