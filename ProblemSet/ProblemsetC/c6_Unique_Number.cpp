#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> digits;
        for (int d = 9; d >= 1 && n > 0; --d) {
            if (n >= d) {
                digits.push_back(d);
                n -= d;
            }
        }
        if (n > 0) {
            cout << -1 << "\n";
        } else {
            sort(digits.begin(), digits.end());
            for (int d : digits) cout << d;
            cout << "\n";
        }
    }
    return 0;
}
