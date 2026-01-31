#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string res = "";

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;

        string a = tmp + res;
        string b = res + tmp;

        res = min(a, b);
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
