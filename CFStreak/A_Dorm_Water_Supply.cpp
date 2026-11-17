#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    vector<int> vs;
    set<int> s;

    vector<int> adj(n+ 1, -1);
    vector<int> pump(n + 1, INT_MAX);

    for(int i = 0; i < e; i++) {
        int u,v,w;
        cin >> u >> v >> w;
        vs.push_back(v);
        s.insert(u);
        s.insert(v);
        pump[u] = w;
        adj[u] = v;
    }

    for(auto val : vs) {
        if(s.count(val)) {
            s.erase(val);
        }
    }

    cout << s.size() nl;
    for(int val : s) {
        int u = val;
        int x = pump[u];
        while(adj[u] != -1) {
            u = adj[u];
            x = min(x, pump[u]);
        }

        cout << val << " " << u << " " << x nl;
    }
    cout nl;
    return 0;
}