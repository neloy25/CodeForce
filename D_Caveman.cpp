#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int maxN = 3 * 1e5 + 7;
vector<int> adj[maxN];
ll len[maxN];
bool vis[maxN];

bool two;

void bfs(int root) {
    queue<int> q;
    q.push(root);
    vis[root] = true;

    while(!q.empty()) {
        int par = q.front();
        q.pop();
        if(adj[par].size() >= 2 && !two) {
            for(int child : adj[par]) {
                if(adj[child].size() >= 2) {
                    two = true;
                }
            }
        }

        for(int child : adj[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

void solve() {
    int n,m;
    cin >> n >> m;
    two = false;
    for(int i = 0; i <= n; i++) {
        adj[i].clear();
        vis[i] = false;
        len[i] = 0;
    }

    for(int i =1 ; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) {
        if(adj[i].size() == 0) {
            cout << "Brain Melt\n";
            return;
        }
    }
    

    bfs(1);
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            cout << "Many\n";
            return;
        }
    }

    if(two) {
        cout << "Many\n";
    } else {
        cout << "2\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}