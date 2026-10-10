#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    string v;
    set<ll> p;
    cin >> v;

    stack<ll> s;
    for(int i = 0; i < n; i++) {
        if(v[i] == '1') {
            s.push(i + 1);
        }

        if(v[i] == '2') {
            if(!s.empty()) {
                p.insert(s.top());
                s.pop();
            } else {
                p.insert(i + 1);
            }
        }

        if(v[i] == '3') {
            p.insert(i + 1);
        }
    }
    cout << n - p.size() nl;
    for(int i = 1; i <= n; i++) {
        if(!p.count(i)) cout << i << " ";
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