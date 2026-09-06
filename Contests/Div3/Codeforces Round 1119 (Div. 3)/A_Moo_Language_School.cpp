#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n,k;
    string s;
    cin >> n >> k >> s;
    int cnt = 0,ans = 0;

    for(int i = 0; i < n; i+=k) {
        bool falg = false;
        for(int j = 0; j <k; j++) {
            if(s[i+j] == '0') {
                falg = true;
                break;
            }
        }
        if(!falg) ans++;
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