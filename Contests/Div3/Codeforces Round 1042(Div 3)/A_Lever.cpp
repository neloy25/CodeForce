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
        vector<int> a(n);
        vector<int> b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        int res = 1;
        for(int i = 0; i < n; i++) {
            if(a[i] > b[i]) {
                res += (a[i] - b[i]);
            }
        }
        cout << res << endl;
    }
    return 0;
}

