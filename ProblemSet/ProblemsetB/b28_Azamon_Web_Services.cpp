#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    string s, c;
    cin >> s >> c;

    int n = s.size();
    for(int i = 0; i < n; i++) {
        bool flag = false;
        int idx = i;
        char chk = s[i];
        for(int j = i + 1; j < n; j++) {
            if(s[j] <= chk) {
                idx = j;
                chk = s[j];
                flag = true;
            }
        }
        if(flag && s[idx] < s[i]) {
            swap(s[i], s[idx]);
            break;
        }
    }

    if(s < c) cout << s nl;
    else cout << "---\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}