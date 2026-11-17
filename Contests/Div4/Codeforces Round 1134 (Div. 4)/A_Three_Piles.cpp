#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    if(v[1] == v[0] + 1 && v[2] == v[1] + 1) yes;
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