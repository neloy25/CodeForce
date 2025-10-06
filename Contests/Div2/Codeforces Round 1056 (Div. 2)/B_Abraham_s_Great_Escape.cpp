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

        if(k == n * n - 1) {
            cout << "NO\n";
            continue;
        }

        bool flag = false;
        if((k + 1) % n == 0) {
            flag = true;
        }


        cout << "YES\n";
        int cnt = 0;

        for(int i = 0; i < n;i++) {
            for(int j = 0; j < n;j++) {
                if(cnt < k) {
                    cout << 'U';
                    cnt++;
                } else {
                    if(flag) {
                        cout << 'D';
                        flag = false;
                    }
                    else if(j == n - 1) cout << 'L';
                    else cout << 'R';
                }
            }
            cout << "\n";
        }
    }
    return 0;
}

