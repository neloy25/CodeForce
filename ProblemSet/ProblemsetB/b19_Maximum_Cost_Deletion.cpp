#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;
        string s;
        cin >> s;
        if(b > 0) {
            cout << (a + b) * n << endl;
            continue;
        }

        int tgl = 0;
        char tmp = '2';
        for(char ch: s){
            if(ch != tmp) {
                tgl++;
                tmp = ch;
            }
        }
        int res = (n - tgl / 2) * a + b + (tgl / 2) * (a + b);
        cout << res << endl;
    }
    return 0;

}

