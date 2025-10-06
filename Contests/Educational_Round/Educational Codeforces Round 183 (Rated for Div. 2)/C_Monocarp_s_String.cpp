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
        string s;
        cin >> s;


        int cnta = 0, cntb = 0;
        for(int i = 0; i < n;i++) {
            if(s[i] == 'a') cnta++;
            else cntb++;
        }

        int diff = cnta - cntb;

        if(diff == 0) {
            cout << 0 << endl;
            continue;
        }

        vector<int> pre(n + 1,0);

        for(int i = 1; i <= n; i++) {
            if(s[i - 1] == 'a') pre[i] = pre[i - 1] + 1;
            else pre[i] = pre[i - 1] - 1;
        }

        map<int,int> mp;
        mp[0] = 0;
        int res = INT_MAX;

        for(int i = 1; i <= n;i++) {
            mp[pre[i - 1]] = i - 1; 

            int tmp = pre[i] - diff;
            if(mp.count(tmp)) {
                res = min(res, i - mp[tmp]);
            }
        }

        if (res == INT_MAX || res == n) cout << -1 << '\n';
        else cout << res << '\n';
    }
    return 0;
}

