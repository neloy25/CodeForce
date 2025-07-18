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
        k = k - 1;
        int res = (n % k== 0) ? (n / k): (n / k) + 1;
        if(n % k == 1) res--;
        cout << res << endl;
    }
    return 0;

}

