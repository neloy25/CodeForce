#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int> (m));
    ll one = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
            one += mat[i][j];
        }
    }
    vector<int> col(m, 0);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            col[i]+= mat[j][i];
        }
    }
    ll target = (one) / 2;
    cout << target * (one - target) nl;

    int idx = 0;
    int r = 0;
    for(int i = 0; i < m; i++) {
        if(target >= col[i]) {
            target -= col[i];
            cout << 'R';
            r++;
        } else {
            idx = i;
            break;
        }
    }

    int j = 0;
    // cout nl << idx << " " << target nl;
    int extra = col[idx] - target;
    while(j <= n) {
        extra-= mat[j][idx];
        cout << 'D';
        j++;
        if(extra == 0) break;
    }

    if(r < m) {
        cout << 'R';
        r++;
    }
    while(j < n) {
        cout << 'D';
        j++;
    }
    while(r < m) {
        cout << 'R';
        r++;
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