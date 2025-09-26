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
        for(auto &x : v) cin >> x;

        int cnt0 = 0;
        int cnt_1= 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == 0) cnt0++;
            if(v[i] == -1) cnt_1++;
        }

        if(cnt_1 % 2) cnt0+=2;
        cout << cnt0 << endl;
    }
    return 0;
}

