#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> p(n);
        vector<int> s(n);

        for(auto &x : p) cin >> x;
        for(auto &x : s) cin >> x;

        if(p[n - 1] != s[0]) {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;
        for(int i = 0; i < n - 1; i++) {
            if(gcd(p[i],s[i + 1]) != s[0]) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

