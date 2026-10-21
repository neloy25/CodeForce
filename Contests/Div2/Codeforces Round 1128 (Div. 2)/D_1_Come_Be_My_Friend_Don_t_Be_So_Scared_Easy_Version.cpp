#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    if(n == 1) {
        cout << 0 nl;
        return;
    }

    int ans = (n + 1) / 2;
    int st = 1, end = n / 2;
    cout << ans nl;
    while(end < n) {
        cout << st << " " << end nl;
        st++; end++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}