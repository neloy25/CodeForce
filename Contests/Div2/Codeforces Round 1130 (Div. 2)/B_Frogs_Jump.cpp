#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = 0; i <n; i++) {
        if(a[i] == 'f')cnt++;
        if(b[i] == 'f')cnt++;
    }

    if(cnt & 1) {
        cout << 1 nl;
    }
    else cout << 0 nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}