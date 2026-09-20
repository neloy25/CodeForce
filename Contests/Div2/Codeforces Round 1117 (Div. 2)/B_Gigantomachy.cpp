#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(auto &x: a) cin >> x;
    for(auto &x : b) cin >> x;

    int one = a[n - 1], two = b[m - 1];
    for(int i = 0; i< n - 1; i++) {
        one += a[i] - a[i + 1] + 1;
    }
    for(int i = 0; i< m - 1; i++) {
        two += b[i] - b[i + 1] + 1;
    }
    if(two > one) cout << 2;
    else cout << 1;
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}