#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> zeros(n + 1);
    zeros[0] = (s[0] == '0' ? 1 : 0);
    for(int i = 1; i < n; i++) {
        zeros[i] = zeros[i - 1] + (s[i] == '0' ? 1 : 0); 
    }
    if(s[0] == '1') {cout << zeros[n - 1] nl;
        return;
    }

    int ans = n + 1;
    for(int i = 1; i < n; i++) {
        int prev = (i) - zeros[i - 1];
        int next = zeros[n - 1] - zeros[i];
        // cout << tmp << " " << prev<< " " << next nl;
        ans = min(ans, prev + next);
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