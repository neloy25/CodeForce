#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
ll inf = LLONG_MAX;

void solve() {
    ll a, b;
    cin >> a >> b;

    if(a == b) {
        cout << 0 nl;
        return;
    }

    if(gcd(a,b) == 1) {
        cout << "1\n";
        cout << b - a nl;
        return;
    }

    ll c = -1;
    for(int i = a + 1; i < b; i++) {
        if(gcd(a,i) == 1 && gcd(b, i) == 1) {
            c = i;
            break;
        }
    }

    if(c != -1) {
        cout << "2\n";
        cout << c - a << " " << b - c nl;
        return;
    }
    
    ll m = b - a + 1;
    vector<ll> dist(m, inf), par(m, -1);
    dist[0] = 0;
    for(int j = 1; j < m; j++) {
        for(int i = 0;i <j; i++) {
            if(dist[i] != inf && dist[i] + 1 < dist[j]
                 && gcd(a + i, a + j) == 1) {
                    dist[j] = dist[i] + 1;
                    par[j] = i;
            }
        }
    }


    vector<ll> res;
    ll v = m - 1;
    while(par[v] != -1) {
        res.push_back(v - par[v]);
        v = par[v];
    }
    cout << res.size() nl;
    reverse(res.begin(), res.end());
    for(ll val : res) {
        cout << val << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}