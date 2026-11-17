#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "! YES\n"
#define no cout << "! NO\n"

void solve() {
    int n;
    cin >> n;

    ll x,y;
    cout << "? " << 1 << " " << n << '\n';
    cout.flush();
    cin >> x;
    if(x == 0) {
        no;
        cout.flush();
        return;
    }
    cout << "? " << 1 << " " << x << '\n';
    cout.flush();
    cin >> y;
    if(x == y) no;
    else yes;
    cout.flush();
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}