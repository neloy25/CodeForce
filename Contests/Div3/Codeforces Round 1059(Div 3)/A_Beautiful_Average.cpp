#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int res = 0;

    for(int i = 0; i < n;i++) {
        int val;
        cin >> val;
        res = max(res,val);
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

