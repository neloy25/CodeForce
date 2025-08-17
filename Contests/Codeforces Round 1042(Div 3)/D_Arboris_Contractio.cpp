#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> tree(n);
        for(int i = 1; i < n; i++) {
            int u, v; cin >> u >> v;
            u--; v--;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        int leafes = 0;
        for(int i = 0; i < n; i++) {
            if(tree[i].size() == 1) leafes++;
        }

        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            int tmp = leafes;
            if(tree[i].size() == 1) tmp -= 1;
            for(int j : tree[i]) {
                if(tree[j].size() == 1) tmp -= 1;
            }
            ans = min(ans,tmp);
        }

        cout << ans << endl;
    }
    return 0;
}

