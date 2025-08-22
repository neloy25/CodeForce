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
        string s;cin >> s;
        int m; cin >> m;
        string p;cin >> p;

        string d; cin >> d;
        int i = 0;

        for(char c : d) {
            if(c == 'D') {
                s.push_back(p[i]);
                i++;
            } else{
                string s1;
                s1.push_back(p[i]);
                i++;
                s1 = s1 + s;
                s = s1;
            }
        }

        cout << s << endl;
    }
    return 0;
}

