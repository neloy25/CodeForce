#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;

    auto ok = [&] (int d) {
        ll rem = n;
        int i = 1;
        while((d / i) != 0) {
            rem -= (i * (d / i));
            // cout << rem nl;
            if(rem <= 0) return true;
            i++;
        }
        return false;
    };
    ll l = 1;
    ll r = n;
    ll ans = n;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if(ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans nl;
    

    vector<int> cnt(n + 1,0);
    ll rem = n;
    int i = 1;
    while((ans / i) != 0) {
        rem -= (i * (ans / i));
        // cout << rem nl;
        
        cnt[i] = (ans / i);
        if(rem <= 0) break;
        i++;
    }
    int k = 1;
    int c = 0;
    vector<int> res;
    for(int i = 1; i <= n;i++) {
        for(int j = 1; j <= cnt[i]; j++) {
            for(int m = 1; m <= i; m++) {
                res.push_back(k);
            }
            k++;
        }
    }
    for(int i = res.size() - 1; i >= 0 && c < n; i--) {
        cout << res[i] << " ";
        c++;
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