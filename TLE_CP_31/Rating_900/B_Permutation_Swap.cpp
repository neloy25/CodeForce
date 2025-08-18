#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       vector<int> v(n);
       for(auto &x : v) cin >> x;

       int res = 0;
       for (int i = 0; i < n; i++)
       {
            res = gcd(res,abs(v[i] - i - 1));
       }
       
       cout << res << endl;
    }

    return 0;
}

