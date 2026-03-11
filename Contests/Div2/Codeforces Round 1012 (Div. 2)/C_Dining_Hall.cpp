#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define arr array<ll,3>
#define pii pair<ll,ll>

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<arr> pos, table;
    set<pii> unavail;

    auto go = [&] (ll x,ll y) {
        if(unavail.find({x,y}) != unavail.end()) {
            return;
        }
        table.insert({3 * x + 3 * y + 2,x, y});
        arr a;
        a[1] = 3 * x + 1; a[2] = 3 * y + 1; a[0] = a[1] + a[2];
        pos.insert(a);
        a[1] = 3 * x + 1; a[2] = 3 * y + 2; a[0] = a[1] + a[2];
        pos.insert(a);
        a[1] = 3 * x + 2; a[2] = 3 * y + 1; a[0] = a[1] + a[2];
        pos.insert(a);
        a[1] = 3 * x + 2; a[2] = 3 * y + 2; a[0] = a[1] + a[2] + 2;
        pos.insert(a);

        unavail.insert({x,y});
    };

    go(0,0);
    go(0,1);
    go(1,0);

    for(int i = 0; i < n; i++) {
        if(v[i] == 0) {
            auto a = *table.begin();
            int x = a[1], y = a[2];
            pos.erase({3 * x + 3 * y + 2,3 * x + 1, 3 * y + 1});
            table.erase(a);

            cout << 3 * x + 1 << " " << 3 * y + 1 nl;
            go(x + 1, y);
            go(x + 2, y);
            go(x + 1, y + 1);
            go(x , y + 1);
            go(x , y + 2);
        } else {
            auto a = *pos.begin();
            int x = a[1] / 3, y = a[2] / 3;
            pos.erase(a);
            if(table.count({3 * x + 3 * y + 2,x, y})) {
                table.erase({3 * x + 3 * y + 2,x, y});
            }

            cout << a[1] << ' ' << a[2] nl;
            go(x + 1, y);
            go(x + 2, y);
            go(x + 1, y + 1);
            go(x , y + 1);
            go(x , y + 2);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}