#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int N = 200005;
vector<int> nxt(N);

void precompute() {
    vector<bool> isPrime(N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++)
        if (isPrime[i])
            for (int j = i * i; j < N; j += i) isPrime[j] = false;

    nxt[N - 1] = N - 1;
    for (int i = N - 2; i >= 0; i--)
        nxt[i] = isPrime[i] ? i : nxt[i + 1];
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        cout << nxt[v[i]] << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}