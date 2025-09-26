#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        vector<int> b;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B') {
                b.push_back(i + 1);
            }
        }

        if(b.empty()) {
            cout << 0 << endl;
            continue;
        }
        
        int fixed = b[0];
        int res = 1;
        for(int val : b){
            if(val > fixed + k - 1){
                fixed = val;
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;

}

