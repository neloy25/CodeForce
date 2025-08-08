#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin >> m >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(),v.end());

    int res = INT_MAX;
    for(int i = m - 1; i < n; i++) {
        res = min(res,v[i] - v[i - m + 1]);
    }

    cout << res << endl;
    return 0;

}

