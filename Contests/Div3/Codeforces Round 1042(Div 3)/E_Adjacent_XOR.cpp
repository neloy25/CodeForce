#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        if(a[n - 1] != b[n - 1]) {
            cout << "NO" << endl;
            continue;
        }
        
        bool ok = true;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] != b[i]) {
                int xi = a[i] ^ a[i + 1];
                int xb = a[i] ^ b[i + 1];
                // cout << b[i] << " " << xi << " " <<xb << endl;
                if (xi != b[i] && xb != b[i]) {
                    ok = false;
                    break;
                }
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
}
