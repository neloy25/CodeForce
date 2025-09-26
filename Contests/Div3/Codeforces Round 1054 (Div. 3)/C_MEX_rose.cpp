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
        vector<int> feq(n + 1,0);
        int mex = 0;
        int miss = 0;
        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            v[i] = val;
            if(val == k) mex++;
            feq[val]++;
        }

        for(int i = 0; i < k;i++) {
            if(feq[i] == 0) {
                miss++;
            }
        }

        cout << max(miss,mex) << endl;

    }
    return 0;
}

