#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string t; cin >> t;
        if(s == t){
            cout << 0 << endl;
            continue;
        }

        string rev_t(t);
        reverse(rev_t.begin(),rev_t.end());

        if(s == rev_t){
            cout << 2 << endl;
            continue;
        }

        int forward = 0, backward = 0;

        for(int i = 0; i < n; i++){
            if(s[i] != t[i]) forward++;
            if(s[i] != rev_t[i]) backward++;
        }

        int ans;
        if (forward % 2) ans = forward * 2 - 1;
        else ans = forward * 2;

        if (backward % 2 == 0) ans = min(ans,backward * 2 - 1);
        else ans = min(ans,backward * 2);
        cout << ans << endl;
    }
    return 0;

}

