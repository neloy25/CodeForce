#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    int check = n;
    int r = 0;
    int l = 0;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == check) {
            if(flag) {
                l = i + 1;
                check--;
            } else {
                r = i + 1;
            }
        } else {
            flag = false;
        }
    }

    reverse(v.begin() + l, v.begin() + r);
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