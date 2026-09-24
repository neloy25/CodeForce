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

    vector<int> values;
    for(int i = 0; i < n; i++) {
        values.push_back(v[i] - i);
    }
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());

    int st = 1, ans = 1, prev = -1;
    for(int i = 0; i < values.size(); i++) {
        if(values[i] == prev + 1) st++;
        else st = 1;
        prev = values[i];
        ans = max(ans, st);
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