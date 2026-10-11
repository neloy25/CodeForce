#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void pre(vector<int> &ans) {
    int n = ans.size();
    vector<int> p(n + 1);
    p[0] = 0;
    for(int i = 1; i <= n; i++) {
        p[i] = p[i - 1] ^ ans[i- 1];
    }

    for(int val : p) {
        cout << val << " ";
    }
    cout nl;
}

void solve() {
    int n;
    cin >> n;

    if(n == 1) {
        cout << "3\n1 1 1\n";
        return;
    }
    int msb = 31 - __builtin_clz(n);
    vector<int> ans;
    int st = (1 << (msb + 1)) - 1;
    ll make = (1 << msb);
    ans.push_back(make);
    ans.push_back(make - 1);

    while(make + 1 < st) {
        ans.push_back(st ^ (st - 1));
        st--;
    }
    ans.push_back(make);
    st = 1;
    while(make > st + 1) {
        ans.push_back(st ^ (st + 1));
        st++;
    }
    ans.push_back(make - 1);
    int end = ans.size() - 1;

    for(int i = 0; i < end; i++) {
        ans.push_back(ans[i]);
    }
    cout << ans.size() nl;
    for(int val : ans) {
        cout << val << " ";
    }
    cout nl;

    // pre(ans);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}