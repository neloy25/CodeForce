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
        string s, s1;
        cin >> n >> k;
        cin >> s;

        s1 = s;
        reverse(s1.begin(),s1.end());

        if(k == 0){
            if(s < s1) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }

        char check = s[0];
        int found = 0;
        for(char val: s){
            if(val != check){
                found = 1;
                break;
            }
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

