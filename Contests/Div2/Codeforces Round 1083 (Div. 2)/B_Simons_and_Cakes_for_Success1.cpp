#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >>n;

    set<ll> primes;
    while(true) {
        bool flag = true;
        for(int i = 2; i * i <= n;i++) {
            if(n % i == 0) {
                primes.insert(i);
                n /= i;
                flag = false;
                break;
            }
        }

        if(flag) {
            primes.insert(n);
            break;
        }
    }
    ll res = 1;
    for(auto val : primes) {
        res *= val;
    }
    cout <<res << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}