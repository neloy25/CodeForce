#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    set<int> len;
    int l = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) {
            l++;
        }
    }
    l++;
    len.insert(l);

    for(int i = 1; i < n - 1; i++) {
        if(s[i + 1] == s[i - 1]) {
            if(s[i] == s[i - 1]) len.insert(l + 2);
            else len.insert(l - 2);
        }
    }
    cout << len.size() nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}