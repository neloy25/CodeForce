#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> mp;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    auto it = mp.begin();
    ll f = it->first;
    it++;
    ll s = it->first;

    cout << max(f,s - f) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

