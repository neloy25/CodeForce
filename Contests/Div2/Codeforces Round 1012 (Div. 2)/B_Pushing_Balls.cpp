#include<bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for(int i = 0; i < n; i++) cin >> grid[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '1') {
                bool row = true;
                for(int k = 0; k <= j; k++) {
                    if(grid[i][k] == '0') {
                        row = false;
                        break;
                    }
                }
                bool col = true;
                for(int k = 0; k <= i; k++) {
                    if(grid[k][j] == '0') {
                        col = false;
                        break;
                    }
                }
                if(!row && !col) {
                    no;
                    return;
                }
            }
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

    return 0;
}