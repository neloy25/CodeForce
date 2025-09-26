#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll atMost(vector<int>& a, int k, int maxLen) {
    if (k < 0) return 0;
    int n = a.size();
    unordered_map<int,int> feq;
    ll count = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        feq[a[right]]++;

        while (feq.size() > k) {
            feq[a[left]]--;
            if (feq[a[left]] == 0) feq.erase(a[left]);
            left++;
        }

        while (right - left + 1 > maxLen) {
            feq[a[left]]--;
            if (feq[a[left]] == 0) feq.erase(a[left]);
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}

ll countK(vector<int>& a, int k, int L, int R) {
    return atMost(a, k, R) - atMost(a, k, L - 1)
         - atMost(a, k - 1, R) + atMost(a, k - 1, L - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << countK(a, k, l, r) << "\n";
    }
    return 0;
}
