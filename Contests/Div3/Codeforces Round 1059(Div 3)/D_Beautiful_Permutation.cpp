#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int, ll> prefP, prefA;

ll ask(int type, int l, int r) {
    cout << type << " " << l << " " << r << endl;
    cout.flush();
    ll res;
    if (!(cin >> res)) exit(0);
    return res;
}

ll sump(int r) {
    if (prefP.count(r)) return prefP[r];
    ll val = ask(1, 1, r);
    prefP[r] = val;
    return val;
}

ll suma(int r) {
    if (prefA.count(r)) return prefA[r];
    ll val = ask(2, 1, r);
    prefA[r] = val;
    return val;
}

void solve() {
    int n;
    cin >> n;

    prefP.clear();
    prefA.clear();

    ll totalP = sump(n);
    ll totalA = suma(n);
    ll totalDiff = totalA - totalP;

    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        ll diff = suma(mid) - sump(mid);
        if (diff != 0)
            hi = mid;
        else
            lo = mid + 1;
    }
    int l = lo;
    lo = l;
    hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        ll diff = suma(mid) - sump(mid);
        if (diff == totalDiff)
            hi = mid;
        else
            lo = mid + 1;
    }
    int r = lo;

    cout << "! " << l << " " << r << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
