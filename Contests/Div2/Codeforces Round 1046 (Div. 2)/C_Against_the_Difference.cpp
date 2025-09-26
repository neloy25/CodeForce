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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        vector<int> res(n + 1, 0);
        vector<deque<int>> pos(n + 1);

        for (int i = 1; i <= n; ++i) {
            res[i] = res[i - 1];
            int x = a[i];
            pos[x].push_back(i);
            if (pos[x].size() > x) pos[x].pop_front();
            if (pos[x].size() == x) {
                int j = pos[x].front();
                res[i] = max(res[i], res[j - 1] + x);
            }
        }
        cout << res[n] << '\n';
    }
    return 0;
}
