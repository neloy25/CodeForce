#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pvi pair<vector<ll>,ll>
#define vpvi vector<pvi>

bool isSort(vector<ll> &v) {
    int n = v.size();
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]) return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(isSort(v)) cout << n nl;
    else cout <<1 nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}