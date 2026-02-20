#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;

    if(n & 1) {
        cout << 0 << endl; return;
    }

    int res = 0;
    for(int i = 0; i <= n; i+=4) {
        int tmp = n - i;
        if(n % 2 == 0) res++;
    }

    cout << res << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}