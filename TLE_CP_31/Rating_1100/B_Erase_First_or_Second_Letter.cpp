#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    set<char> st;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        ans+= (ll)st.size();
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}