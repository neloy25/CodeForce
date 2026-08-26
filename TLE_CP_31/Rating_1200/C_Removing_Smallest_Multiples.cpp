#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n; string s;
    cin >> n >> s;

    vector<int> cost(n + 1, INT_MAX);
    for(int i = 1; i <= n; i++) {
        if(s[i - 1] == '1') continue;
        // cout << i << " ";
        for(int j = i; j <=n; j+=i) {
            if(s[j - 1] == '1') break;
            cost[j] = min(i, cost[j]);
        }
    }
    // cout nl;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        // cout << i << " " << s[i - 1] << " " << cost[i] nl;
        if(s[i- 1] == '0') ans += cost[i];
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