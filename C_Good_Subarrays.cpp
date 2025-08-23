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
        vector<int>prefix_sum(n+1);
        vector<int>suffix_sum(n+1);
        prefix_sum[0] = 0;
        suffix_sum[0] = 0;
        for(int i = 1;i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + (s[i - 1] - '0');
        }

        for(int i = 1;i <= n; i++) {
            suffix_sum[i] = suffix_sum[i - 1] + (s[n - i] - '0');
        }

        int res = 0;

        for(int i = 1; i <= n; i++) {
            cout << prefix_sum[i] << " ";
        }

        cout << endl;
        for(int i = 1; i <= n; i++) {
            cout << suffix_sum[i] << " ";
        }

        for(int i = 1; i <= n; i++) {
            if(prefix_sum[i] == i) res++;
            if(suffix_sum[i] == i) res++;
        }

        cout << endl;
        if(prefix_sum[n] == n) res--;
        cout << res << endl;
    }
    return 0;
}

