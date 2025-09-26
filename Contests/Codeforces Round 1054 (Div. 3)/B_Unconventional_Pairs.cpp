#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &x: v) cin >> x;

        sort(v.begin(),v.end());

        int res = 0;
        for(int i = 0; i < n - 1; i+= 2) {
            res = max(res, v[i + 1] - v[i]);
        }

        cout << res << endl;
    }
    return 0;
}

