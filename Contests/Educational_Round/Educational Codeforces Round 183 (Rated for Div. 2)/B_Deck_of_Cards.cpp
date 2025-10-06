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

        string s;
        cin >> s;
        if(n == k) {
            for(int i = 0; i < n; i++) {
                cout << "-";
            }
            cout << endl;
            continue;
        }

        int cnt0 = 0,cnt1 = 0,cnt2 = 0;
        for(int i = 0;i < k; i++) {
            if(s[i] == '0') cnt0++;
            else if(s[i] == '1') cnt1++;
            else cnt2++;
        }

        string res(n,'-');
        int l = cnt0,r = n - cnt1 - 1;
        while(l <= r) {
            if(cnt2 <= 0) {
                res[l] = '+';
                res[r] = '+';
                l++;
                r--;
            }
            else {
                res[l] = '?';
                res[r] = '?';
                l++;
                r--;
                cnt2--;
            }
        }

        
        cout << res << endl;

    }
    return 0;
}

