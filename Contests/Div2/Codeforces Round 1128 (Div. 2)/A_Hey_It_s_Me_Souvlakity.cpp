#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n; string s;
    cin >> n;
    cin >> s;

    int cnt = 0;
    int f = -1, l = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            // cout << i nl;
            if(f == -1) f = i;
            else l = i;
            cnt++;
        }
    }
    // cout << f << " " << l nl;
    if(l == -1) {
        cout << 0 nl;
        return;
    }
    if(cnt == 2) {
        cout << 1 nl;
        return;
    }
    cout << l - f nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}