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
        if(n > k) {
            if(n % k == 0) cout << 1 << endl;
            else cout << 2 << endl;
            continue;
        } else{
            cout << (k + n - 1) / n << endl;
        }
    }
    return 0;

}

