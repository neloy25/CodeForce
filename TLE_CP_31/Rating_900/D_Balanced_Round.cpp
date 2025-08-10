#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        sort(v.begin(),v.end());

        int cnt = 0,mx = 0;
        for(int i = 0; i < n - 1; i++) {
            if(v[i + 1] - v[i] <= k) cnt++;
            else {
                cnt = 0;
            }
            mx = max(cnt,mx);
        }
        cout << n - mx - 1 << endl;
    }
    return 0;
}

