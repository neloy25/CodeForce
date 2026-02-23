#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;

    ll val = 0;
    for(int i = 1; i < n; i++) {
        if(i & 1) val+=i;
        else val-=i;
    }

    ll st;
    if(val < 0) st = 1 + abs(val);
    else st = n - val;

    ll prev = st;
    cout << st << " ";
    for(int i = 1; i < n; i++) {
        if(i & 1) prev = prev + i;
        else prev = prev - i;
        cout << prev << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}