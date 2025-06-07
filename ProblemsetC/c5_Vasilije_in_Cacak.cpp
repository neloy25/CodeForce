#include <bits/stdc++.h>
using namespace std;

long long sum(long long k) {
    return k * (k + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;

        long long min_sum = sum(k);
        long long max_sum = sum(n) - sum(n - k);

        cout << (x >= min_sum && x <= max_sum ? "YES" : "NO") << '\n';
    }

    return 0;
}
