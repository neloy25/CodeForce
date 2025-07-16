#include<bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--){
        int n,m,q; cin >> n >> m >> q;
        vector<int> ff;
        for(int i = 1; i <= sqrt(m);i++){
            if(m % i == 0){
                ff.push_back(i);
                ff.push_back(m/i);
            }
        }

        vector<int> v(n);
        for(auto &x : v) cin >> x;

        int fcnt = ff.size();
        vector<int> inv(fcnt,0);
        vector<vector<int>> vals(fcnt, vector<int>(n));
        for(int j = 0; j < fcnt;j++){
            for(int i = 0; i < n; i++){
                vals[j][i] = v[i] % ff[j];
                if(i > 0 && vals[j][i - 1] > vals[j][i]) inv[j]++;
            }
        }

        while(q--) {
            int t; cin >> t;
            if(t == 1) {
                int i,x; cin >> i >> x;
                i--;
                for(int j = 0; j < fcnt; j++){
                    if(i > 0 && vals[j][i - 1] > vals[j][i]) inv[j]--;
                    if(i < n -1 && vals[j][i] > vals[j][i + 1]) inv[j]--;
                    vals[j][i] = (x % ff[j]);
                    if(i > 0 && vals[j][i - 1] > vals[j][i]) inv[j]++;
                    if(i < n -1 && vals[j][i] > vals[j][i + 1]) inv[j]++;
                }
            }
            else{
                int k; cin >> k;
                int g = gcd(m,k);
                if(g == 1) {
                    cout << "YES" << endl;
                    continue;
                }
                bool ans = false;
                for(int j = 0; j < fcnt; j++){
                    if(ff[j] == g) {
                        if(inv[j] < m / g) ans = true;
                        break;
                    }
                }
                cout << (ans ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;

}

