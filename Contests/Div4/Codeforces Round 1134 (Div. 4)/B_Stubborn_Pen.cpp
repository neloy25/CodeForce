#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;

    char prev = 'B';
   int ans = 0;
    for(auto c: s) {
        if(c == prev) ans++;
        prev = c;
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