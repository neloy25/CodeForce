#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> div;
    ll x = 10;
    for(int i = 1; i < 18; i++) {
        div.push_back(x + 1);
        x *= 10;
    }

    int t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> res;
        for(ll val: div) {
            if(n % val == 0) {
                res.push_back(n / val);
            }
        }

        reverse(res.begin(),res.end());
        cout << res.size() << endl;
        if(res.size() == 0) continue;
        for(ll val : res) {
            cout << val << " ";
        }

        cout << endl;
    }
    return 0;
}

