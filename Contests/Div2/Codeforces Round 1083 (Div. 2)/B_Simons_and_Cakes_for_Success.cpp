#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

ll MOD;
ll pow(ll a, ll b) {
    ll res = 1;
    while(b != 0) {
        if(b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll n;
    cin >> n;

    MOD = n;
    vector<ll> div;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            div.push_back(i);
            if(i != n / i) div.push_back(n / i);
        }
    }

    sort(div.begin(), div.end());
    for(int i = 0; i < div.size(); i++) {
        if(pow(div[i], n) % n == 0) {
            cout << div[i] << endl;
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}