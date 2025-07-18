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
        if(n == 1) cout << 1 << endl;
        else if(n % 2 == 0) cout << -1 << endl;
        else{
            int mid = (n + 3) / 2;
            for(int i = 1; i <= n; i++){
                if(mid == 0) {
                    cout << n << " ";
                } else{
                    cout << mid << " ";                    
                }
                mid = (mid + 2) % n;
            }
            cout << endl;
        }
    }
    return 0;

}

