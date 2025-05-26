#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k,len,count_0,count_1,max,min;
        cin >> n >> k;
        string s;
        cin >> s;
        count_1 = 0;
        len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] == '1') count_1++;
        }
        count_0 = n - count_1;
        if(count_1 % 2 != 0) max = n / 2 - 1;
        else max = n / 2;

        min = abs(count_1 - count_0) / 2;

        if(k >= min && k <= max){
            if(min % 2 == 0 && k % 2 == 0) cout << "YES\n";
            else if(min % 2 == 1 && k % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}
