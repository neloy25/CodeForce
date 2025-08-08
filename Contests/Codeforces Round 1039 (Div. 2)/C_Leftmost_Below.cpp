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
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        vector<int> min_v(n);
        min_v[0] = v[0];
        bool flag = true;
        for(int i = 1; i < n; i++) {
            min_v[i] = min(min_v[i - 1], v[i]);
            if(v[i] / 2 >= min_v[i]) {
                flag = false;
                break;
            }
        }
        
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;

}

