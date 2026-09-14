#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int n, k;
    cin >> n >> k;

    if(k < n ||  k >= 2 * n) {
        cout << -1 nl;
        return;
    }

    vector<vector<int>> res(n, vector<int>(n, 0));
    int cnt = 1;
    int rem = k - n;
    for(int i = 0; i <= rem; i++) {
        res[i][0] = cnt++;
    }

    for(int i = 1; i < n; i++) {
        res[i][i] = cnt++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(res[i][j] == 0) res[i][j] = cnt++; 
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}