#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<int> pos(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i + 1;
    }

    for(int i = 1; i <= n; i++) {
        if(pos[i] == i) continue;
        int x = max(pos[i], i);
        int y = min(pos[i], i);

        bool flag = true;
        while(x >= y) {
            y <<= 1;
            if(x == y) flag = false;
        }

        if(flag) {
            no;
            return;
        }
    }

    yes;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}