#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = stoi(s);
        bool found = false;


        for (int i = 0; i <= 99; i++) {
            if (i * i == n) {
                cout << 0 << " " << i << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << '\n';
        }
    }

    return 0;
}
