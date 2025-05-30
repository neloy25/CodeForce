#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        int open = 0;
        int close = 0;
        int flag = 0;
        for(int i = 0; i < len - 1; i++){
            if(s[i] == '(') open++;
            else close++;

            if(close >= open){
                flag = 1;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;

}
