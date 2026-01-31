#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        sort(v.begin(),v.end());

        int res = 0;
        int temp = 0;
        for(int i = 1; i < n; i++) {
            // cout << temp << endl;
            if(v[i] - v[i - 1] == 1) {
                temp++;
            } else if(v[i] == v[i - 1]) {
                continue;
            } else {
                res = max(res, temp);
                temp = 0;
            }
        }
        res = max(res,temp);
        cout << res + 1 <<endl;
    }
}