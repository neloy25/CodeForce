#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n+1);
        for(int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            v[i] = val;
        }

        v[n] = 0;
        ll res = 0;
        for(int i = 1; i < n; i+=2) {
            ll diff = v[i + 1] + v[i - 1] - v[i];
            if(diff > 0) {
                res+=diff;
                if(v[i + 1] >= diff) {
                    v[i + 1] -= diff;
                } else{
                    v[i + 1] = 0;
                    diff = diff - v[i + 1];
                    v[i - 1] -= diff;
                }
            }
        }


        cout << res << endl;
    }
    return 0;
}

