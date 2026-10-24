#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int maxN = 5 * 1e5 + 7;
vector<int> adj[maxN];
ll len[maxN];
bool vis[maxN];


void solve() {
    int n,m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++) {
        adj[i].clear();
        vis[i] = false;
        len[i] = 0;
    }

    for(int i =1 ; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> v(m);
    for(int i = 0; i < m; i++) {
        cin >> v[i];
    }
    
    queue<ll> q;
    q.push(n);

    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : adj[par]) {
            if(!vis[child]) {
                len[child] = len[par] + 1;
                vis[child] = true;
                if(child != 1) {
                    q.push(child);
                }
            }
        }
    }

    ll mx = len[1];

    for(int i = 0; i < m; i++) {
        if(v[i] == n) continue;
        mx = max(mx, len[v[i]] + 1);
    }
    cout << mx nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}