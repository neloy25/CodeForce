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
        string s; cin >> s;

        int cnt = 1;
        char prev = '=';
        int res = 0;
        for(char c : s) {
            if(c != prev) {
                cnt = 1;
                prev = c;
            } else{
                cnt++;
            }
            res = max(res,cnt);
        }

        cout << res + 1<< endl;
    }
    return 0;
}

