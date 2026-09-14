#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v;
    for(int i = 1; i <= n; i++) {
        int val; cin >> val;
        if(val != i) v.push_back(val);
    }

    for(int i = 1; i < v.size(); i++) {
        if(v[i] > v[i- 1]){
            no;
            return;
        }
    }
    yes;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}