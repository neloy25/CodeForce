#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll x,y;cin >> x >> y;

    if(y > 0) x -= 2 * y;
    else if(y < 0) x -= 4 *(-y);


    if(x >= 0 && x % 3 == 0) yes;
    else no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}