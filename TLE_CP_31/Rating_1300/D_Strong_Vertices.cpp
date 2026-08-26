#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), res;
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    vector<int> diff(n);
    for(int i= 0; i < n;i++) {
        diff[i] = a[i] - b[i];
    }

    int mx = *max_element(diff.begin(), diff.end());

    for(int i = 0;i < n; i++) {
        if(diff[i] == mx) {
            res.push_back(i + 1);
        }
    }

    cout << res.size() nl;
    for(int val : res) {
        cout << val << " ";
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