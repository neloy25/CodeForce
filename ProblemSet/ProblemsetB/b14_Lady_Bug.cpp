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
        string s1,s2;
        cin >> s1; cin >> s2;
        int zig1 = 0; int zig2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2){
                zig1 += s2[i] - '0';
                zig2 += s1[i] - '0';
            } else{
                zig1 += s1[i] - '0';
                zig2 += s2[i] - '0';
            }
        }
        if(n % 2 == 0){
            if(zig1 > n / 2 || zig2 > n / 2){
                cout << "NO";
            } else{
                cout << "YES";
            }
        } else{
            if(zig1 > n / 2 || zig2 > n / 2 + 1){
                cout << "NO";
            } else{
                cout << "YES";
            }
        }
        cout << endl;
    }
    return 0;

}

