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
        string s;
        cin >> s;

        int cnt0 = 0;
        for(char ch: s) {
            if(ch == '0') cnt0++;
        }

        int ans = 0;
        for(int i = 0; i < cnt0;i++) {
            if(s[i] == '1') ans++;
        }

        cout << ans << endl;
    }
    return 0;
}

