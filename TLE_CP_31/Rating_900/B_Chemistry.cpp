#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector <int> feq(26,0);
        for(char ch: s){
            int i = ch - 'a';
            feq[i]++;
        }

        int odd_feq = 0;
        for(int val: feq){
            if(val % 2 == 1){
                odd_feq++;
            }
        }

        cout << ((odd_feq <= k + 1) ? "YES\n" : "NO\n"); 
    }
    return 0;
}