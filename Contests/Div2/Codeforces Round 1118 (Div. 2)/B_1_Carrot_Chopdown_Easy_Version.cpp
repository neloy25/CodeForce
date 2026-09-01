#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

// Ordered Set
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    greater_equal<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
// Usage:
// os.insert(x)        -> insert element
// os.erase(x)         -> erase element
// *os.find_by_order(k) -> k-th element (0-based)
// os.order_of_key(x)   -> # of elements < x

void solve() {
    int n,m;
    cin >> n >> m;

    vector<ll> v(n);
    ordered_set<ll> os;
    map<ll,ll> feq;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        os.insert(v[i]);
        feq[v[i]]++;
    }

    int ans = n;
    for(int i = 1; i <= m; i++) {
        int tmp = os.order_of_key(i) + feq[i] + feq[2 * i];
        ans = max(ans, tmp);
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}