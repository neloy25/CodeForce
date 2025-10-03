#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 998244353


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> q(n);
        vector<int> res(n);
        vector<int>pow_2(n);
        pow_2[0] = 1;
        for(int i = 1; i < n; i++) {
            pow_2[i] = (pow_2[i - 1] * 2 ) % MOD;
        }

        for(auto &x: p) cin >> x;
        for(auto &x: q) cin >> x;
        int i = 0,j = 0;

        for(int k = 0; k < n;k++) {
            if(p[k] > p[i]) i = k;
            if(q[k] > q[j]) j = k;

            if(p[i] == q[j]) {
                res[k] = (pow_2[p[i]] + pow_2[max(q[k - i], p[k - j])]) % MOD;
            } else{
                if(p[i] > q[j]) res[k] = (pow_2[p[i]] + pow_2[q[k - i]]) % MOD;
                else res[k] = (pow_2[q[j]] + pow_2[p[k - j]]) % MOD;
            }
        }

        for(int k = 0; k < n; k++) {
            cout << res[k] << " ";
        }
        cout << endl;
    }
    return 0;
}

