#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> pre_sum(n + 1);
    pre_sum[0] = 0;
    for(auto &x : v) cin >> x;

    for(int i = 1; i < n; i++) {
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }

    while(q--) {
        int l,r,k;
        cin >> l >> r >> k;

        
    }
    return 0;
}

