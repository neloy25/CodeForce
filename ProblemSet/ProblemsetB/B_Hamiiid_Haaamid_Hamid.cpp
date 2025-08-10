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
        cin >> n >> k;
        string s; cin >> s;

        int l = k;
        int r = (n - k) + 1;

        if(l == 1 || r == 1) {
            cout << 1 << endl;
            continue;
        }

        int r_wall = -1;
        int l_wall = -1;
        for(int i = k - 1; i < n; i++) {
            if(s[i] == '#') {
                r_wall = i + 1;
                break;
            }
        }

        for(int i = k - 1; i >= 0; i--) {
            if(s[i] == '#') {
                l_wall = i + 1;
                break;
            }
        }

        if(l_wall == -1 && r_wall == -1) {
            cout << 1 << endl;
            continue;
        }

        int l_step,r_step;
        if(l_wall != -1) l_step = l_wall + 1;
        else l_step = 1;

        if(r_wall != -1) r_step = (n - r_wall) + 2;
        else r_step = 1;
        
        cout << min(min(l,r), max(l_step,r_step)) << endl;
       }
    return 0;

}

