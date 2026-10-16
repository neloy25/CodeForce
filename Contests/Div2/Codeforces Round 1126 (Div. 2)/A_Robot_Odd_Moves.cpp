#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int x, y;
    cin >> x >> y;
    if(y > x + 1) {
        cout << -1 nl;
    } else if((x + y) & 1) {
        cout << x + 1 nl;
    } else {
        cout << x nl;
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