#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = -1, r = -1;
    int mxl = 0, mxr = 0,ans = 0;

    for(int i = 0; i < n;i++) {
        if(v[i] == 1) {
            if(l == -1) {
                l = i;
                continue;
            }
            int tmp = (i - l) + 1;
            if(tmp > ans) {
                ans = tmp;
                mxl = l, mxr = i;
            }
            l = i;
        }

        if(v[i] == -1) {
            if(l == -1) {
                l = i;
                continue;
            }
            int tmp = (i - l) + 1;
            if(tmp > ans) {
                ans = tmp;
                mxl = l, mxr = i;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(v[i] == -1) {
            if(i > mxl && i < mxr) {
                v[i] = 0;
            } else{
                v[i] = 1;
            }
        }
    }
    for(int val : v) {
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