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
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') one++;
        else zero++;
    }
    if(one == 0) {
        cout << 0 nl;
    } else if(one % 2 == 0) {
        cout << one nl;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') cout << i + 1 << " ";
        }
        cout nl;
    } else if(zero % 2 == 1) {
        cout << zero nl;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') cout << i + 1 << " ";
        }
        cout nl;
    } else {
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