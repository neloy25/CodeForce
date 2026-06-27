#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int id = max_element(v.begin(), v.end()) - v.begin();
    swap(v[id], v[0]);
    for(auto val : v) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}