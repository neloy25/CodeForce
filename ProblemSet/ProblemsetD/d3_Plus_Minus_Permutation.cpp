#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) { long long t = b; b = a % b; a = t; }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long sum_first_k(long long k) {
    return k * (k + 1) / 2;
}

long long sum_last_k(long long n, long long k) {
    return sum_first_k(n) - sum_first_k(n - k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long L = lcm(x, y);
        long long a = n / x - n / L;
        long long b = n / y - n / L;

        long long score = sum_last_k(n, a) - sum_first_k(b);
        cout << score << '\n';
    }

    return 0;
}
