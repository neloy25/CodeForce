#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n; string s;
    cin >> n >> s;

    int e0 = 0, e1 = 0, d0 = 0, d1 = 0;
    if(s[0] == '0') e0++;
    else e1++;
    if(s[n - 1] == '0') e0++;
    else e1++;

    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1]) {
            if(s[i] == '0') d0++;
            else d1++;
        } 
    }
    
    if(d0 == d1 || abs(d0 - d1) == 1) {
        cout << d0 + d1 nl;
    } else if(abs(d0 - d1) == 2) {
        if(abs(d0 + e0 - d1) <= 1 || abs(d0 - d1 - e1) <= 1) {
            cout << d0 + d1 + 1 nl;
        } else {
            cout << -1 nl;
        }
    } else if(abs(d0 - d1) == 3) {
        if(abs(d0 + e0 - d1) <= 1 || abs(d0 - d1 - e1) <= 1) {
            cout << d0 + d1 + 2 nl;
        } else {
            cout << -1 nl;
        }
    }else {
        cout << -1 nl;
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