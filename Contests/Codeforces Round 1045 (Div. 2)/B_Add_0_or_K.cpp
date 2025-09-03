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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        if(k % 2) {
            for(int i = 0; i < n; i++) {
                if(v[i] % 2)
                    v[i] = v[i] + k;
            }            
        } else {
            for(int i = 0; i < n; i++) {
                v[i] = v[i] + (v[i] % (k + 1)) * k;
            }
        }

        for(ll val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

