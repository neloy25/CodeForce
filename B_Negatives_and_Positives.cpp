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
        vector<int> arr(n);
        for(auto &x : arr) cin >> x;
        int cnt = 0, mn = INT_MAX;
        long long sum = 0;
        for(int val : arr){
            if(val < 0) cnt++;
            mn = min(mn,abs(val));
            sum += abs(val);
        }

        if(cnt % 2 == 0) cout << sum << endl;
        else cout << sum - 2 * mn << endl;
    }
    return 0;

}

