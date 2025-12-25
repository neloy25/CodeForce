#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> diff(n);
    diff[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll res = 0;
    for(int i = 1; i < n; i++) {
        diff[i] = abs(v[i]-v[i - 1]);
        res+= diff[i];
    }

    ll minus = max(diff[1],diff[n - 1]);

    for(int i = 1; i < n - 1; i++) {
        ll tmp = diff[i] + diff[i + 1] - abs(v[i + 1] - v[i - 1]);
        minus = max(tmp,minus);
    }

    cout << res - minus << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

