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
        int res = 11;
        while(n != 0) {
            int rem = n % 10;
            res = min(res,rem);
            n = n / 10;
        }

        cout << res << endl;
    }
    return 0;

}

