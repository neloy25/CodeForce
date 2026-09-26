#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n,m,x,y;
    cin >> x>> y >> n >> m;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    ll sa = 0, sb = 0, sc = 0;
    ll i = n- 1, j = m -1;
    ll sum = 0;
    while(i >= 0 && j >= 0) {
        if(((sa + sb + sc) >= (x + y - 1)) || (sa >= x) || (sb >= y)) break;
        if(a[i] == b[j]) {
            sc++;
            sum+= a[i];
            i--; j--;
        } else if(a[i] > b[j]) {
            sa++;
            sum+=a[i];
            i--;
        } else {
            sb++;
            sum +=b[j];
            j--;
        }
    }

    while(i >= 0) {
        if(((sa + sb + sc) >= (x + y - 1)) || (sa >= x)) break;
        sa++;
        sum+=a[i];
        i--;
    }

    while(j >= 0) {
        if(((sa + sb + sc) >= (x + y - 1)) || (sb >= y)) break;
        sb++;
        sum+=b[j];
        j--;
    }
    cout << sum nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}