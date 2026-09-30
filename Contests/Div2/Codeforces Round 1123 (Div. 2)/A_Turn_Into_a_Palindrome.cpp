#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n; char c; string s;
    cin >> n >> c >> s;

    int l = 0, r = n - 1;
    int ans = 0;
    while(l <= r) {
        if(s[l] != s[r]) {
            if(s[l] == c || s[r] == c) ans+=1;
            else ans+=2;
        }
        l++;
        r--;
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