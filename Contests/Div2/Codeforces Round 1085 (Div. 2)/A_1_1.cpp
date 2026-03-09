#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    // for(int i = 0; i < n; i++) {
    //     if(s[i] == '1') one++;
    // }
    // int mx = one, mn = one;
    for(int i = 1; i < n - 1; i++) {
        if(s[i - 1] == '1' && s[i + 1] == '1') {
            s[i] = '1';
        }
    }

    for(int i = 0; i < n; i++) {
        if(s[i] == '1') one++;
    }

    for(int i = 1; i < n - 1; i++) {
        if(s[i - 1] == '1' && s[i + 1] == '1') {
            if(s[i] == '1') {
                zero++;
                s[i] = '0';
            }

        }
    }
    cout << one - zero << " " << one nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}