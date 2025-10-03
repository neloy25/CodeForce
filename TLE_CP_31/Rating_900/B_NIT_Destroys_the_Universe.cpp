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

        bool flag1 = false;
        bool flag2 = false;

        int l = 0, r = n - 1;

        while(l <= r) {
            if(v[l] != 0 && v[r] != 0) break;
            if(v[l] == 0) l++;
            if(v[r] == 0) r--;
        }

        if(l > r) {
            cout << 0 << endl;
            continue;
        }

        bool flag = false;
        for(int i = l; i <= r;i++) {
            if(!v[i]) {
                flag = true;
                break;
            }
        }

        if(flag) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}

