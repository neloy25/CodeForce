#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == v[n - 1]) cnt++;
    }
    if(cnt > k) {
        no;
        return;
    }

    yes;
    for(int i = n - k; i < n; i++) {
        cout << v[i] << " ";
    }
    for(int i = n - k - 1; i >= 0; i--){
        cout << v[i] << " ";
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