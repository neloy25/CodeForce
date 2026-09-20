#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    string s; cin >> s;

    int r = 0, b = 0;
    for(int i = 0; i < 2 * n; i++) {
        int j = (i + 1) % (2 * n);
        if(s[i] == '1' && s[j] == '0') {
            if(i % 2) r++;
            else b++;
        }
        if(s[i] == '1' && s[j] == '1') {
            if(i % 2) b++;
            else r++;
        }
    }
    cout << b << " " << r nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}