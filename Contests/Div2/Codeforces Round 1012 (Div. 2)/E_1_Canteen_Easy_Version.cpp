#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n), v(2 * n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    v[0] = a[0] - b[0];
    for(int i = 1; i < 2 * n; i++) {
        v[i] = v[i - 1] + (a[i % n] - b[i % n]);
    }


    stack<pair<ll,ll>> st;
    ll ans = 0;
    for(int i = 0; i < 2 * n; i++) {
        while(!st.empty() && st.top().first >= v[i]) {
            ans = max(ans, i - st.top().second);
            st.pop();
        }
        st.push({v[i], i});
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}