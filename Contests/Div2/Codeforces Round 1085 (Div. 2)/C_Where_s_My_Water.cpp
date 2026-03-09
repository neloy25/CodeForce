#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vector<ll>> r(n, vector<ll>(n, 0));
    for(int i = 0; i < n; i++) {
        ll mx = v[i];
        for(int j = i; j < n; j++) {
            mx = max(mx, v[j]);
            r[i][j] = mx;
        }
    }

    vector<vector<ll>> sr(n, vector<ll>(n, 0));
    for(int i = 0; i < n; i++) {
        ll sum = 0;
        for(int j = i; j < n; j++) {
            sum += r[i][j];
            sr[i][j] = sum;
        }
    }

    vector<vector<ll>> sc(n, vector<ll>(n, 0));
    for(int j = 0; j < n; j++) {
        ll sum = 0;
        for(int i = 0; i <= j; i++) {
            sum += r[i][j];
            sc[i][j] = sum;
        }
    }

    vector<ll> bl(n, 0), br(n, 0);
    for(int a = 0; a < n; a++) bl[a] = sc[a][a];
    for(int b = 0; b < n; b++) br[b] = sr[b][n - 1];

    ll res = 0;

    for(int a = 0; a < n; a++) {
        ll blocked = bl[a] + br[a] - v[a];
        res = max(res, n * h - blocked);

        int k = a;

        for(int b = a + 1; b < n; b++) {
            while(k + 1 < b && r[a][k + 1] <= r[k + 1][b]) {
                k++;
            }

            ll mid = 0;
            
            if(k >= a + 1) {
                mid += sr[a][k] - sr[a][a]; 
            }
            
            if(b - 1 >= k + 1) {
                mid += sc[b - 1][b] - sc[k][b];
            }

            blocked = bl[a] + br[b] + mid;
            res = max(res, n * h - blocked);
        }
    }
    
    cout << res nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}