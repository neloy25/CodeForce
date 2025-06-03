#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = floor(log2((double)n));
        int res = 2 * (ans + 1) + 1;
        cout << res << endl;
    }
    return 0;

}

