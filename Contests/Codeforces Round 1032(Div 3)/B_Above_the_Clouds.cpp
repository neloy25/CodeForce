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
        vector <int> feq(26,0);
        if(s[0] == s[n  - 1]) feq[s[0] - 'a']--;

        for(char ch: s){
            feq[ch - 'a']++;
        }
        bool flag = false;
        for(int i : feq){
            if(i >= 2) {
                flag = true;
                break;
            }
        }
        cout << ((flag) ? "Yes\n" : "No\n");
    }
    return 0;

}

