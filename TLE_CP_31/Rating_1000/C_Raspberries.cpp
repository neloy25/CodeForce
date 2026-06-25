#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    int ans = 10;
    int even = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        ans = min(ans, (k - a[i] % k) % k);

        if (a[i] % 2 == 0)
            even++;
    }

    if (k == 4) {
        int cost;
        if (even >= 2)
            cost = 0;
        else if (even == 1)
            cost = 1;
        else
            cost = 2;

        ans = min(ans, cost);
    }

    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}