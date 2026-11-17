#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    if(n <= 3) {
        cout << -1 nl;
        return;
    }
    vector<int> res;
    for(int i = 0; i < n; i++) {
        res.push_back(i + 1);
    }
    swap(res[0] ,res[3]);
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