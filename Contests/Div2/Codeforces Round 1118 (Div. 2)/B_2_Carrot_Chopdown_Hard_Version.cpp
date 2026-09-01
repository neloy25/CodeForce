#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl << '\n'

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> v(n);
    vector<ll> feq(m + 1, 0);   

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }

    vector<ll> gt(m + 1, 0);
    for (ll x = m - 1; x >= 0; x--) gt[x] = gt[x + 1] + feq[x + 1];

    auto of = [&](ll x) -> ll {
        return (x > m) ? 0 : gt[x];
    };
    auto fq = [&](ll x) -> ll {
        return (x > m) ? 0 : feq[x];
    };

    vector<ll> score(m + 1,0);
    for(ll i = 1; i <= m + 1; i++) {
        ll prev = fq(i);
        ll all = 0;
        for(int k = 1; k <= m; k++) {
            ll pk1 = (1 << (k - 1)), pk = 1 << k;
            ll temp = prev + of(i * pk1) * pk1
                    + fq(i * pk);
            all+= pk1;
            for(ll j = i * pk1; j < i * (pk); j+=i) {
                ll num = of(j) - of(j + i - 1);
                if(j != i * pk1) num = num + fq(j);
                temp = temp + num*(j / i) - num * all;
            }
            score[k] = max(score[k], temp);
            prev = temp;
            if(i * pk1 > m) break;
        }
    }
    for(int i = 1 ;i <= m; i++) {
        score[i] = max(score[i], score[i -1]);
        cout << score[i] << " ";
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