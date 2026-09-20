#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    cin >> n;
    vector<ll> depth(n+ 1,0),dams;
    for(int i = 2; i <= n; i++) {
        int val;
        cin >> val;
        depth[i] = depth[val] + 1;
    }
    
    bool root = false;
    int skip;
    int m; cin >> m;
    for(int i = 0; i < m; i++) {
        int val; cin >> val;
        dams.push_back(val);
        if(val == 1) root = true;
    }
    if(root){
        skip = 1;
    } else {
        int mn = INT_MAX;
        int node;
        for(int val : dams) {
            if(depth[val] < mn) {
                mn = depth[val];
                node = val;
            }
        }
        skip = node;
    }
    cout << m - 1 << " ";
    for(int val : dams) {
        if(val != skip) {
            cout << val << " ";
        }
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