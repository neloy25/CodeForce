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
        int cons = 0;
        int val = 1;
        bool found = true;
        vector<int> res(n);
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                cons++;
                if(cons == k) {
                    found = false;
                    break;
                }
                res[i] = val;
                val+=1;
            } else{
                cons = 0;
            }
        }

        if(!found) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                res[i] = val;
                val+=1;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

