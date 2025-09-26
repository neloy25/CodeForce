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
        int sum = 0;

        if(k > n / 2) {
            cout << "Alice\n";
        } else{
            for(char ch: s) sum += (ch - '0');
            if(k >= sum) cout << "Alice\n";
            else cout << "Bob\n";
        }
    }
    return 0;

}

