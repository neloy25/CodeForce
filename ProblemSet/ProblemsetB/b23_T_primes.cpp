#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX_N = 1000005;

vector<bool> is_prime(MAX_N, true);
vector<ll> t_prime;

void sieve() {
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i < MAX_N; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i < MAX_N; i++) {
        if (is_prime[i]) t_prime.push_back(i * i);
    }
}

bool find_val(const vector<ll>& nums, ll x) {
    ll l = 0, r = nums.size() - 1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (nums[mid] == x) return true;
        else if (nums[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int n;
    cin >> n;
    vector<ll> nums(n);
    for (auto &x : nums) cin >> x;

    for (ll val : nums) {
        if (find_val(t_prime, val)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
