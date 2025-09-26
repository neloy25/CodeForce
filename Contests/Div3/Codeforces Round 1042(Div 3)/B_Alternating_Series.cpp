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

        for(int i = 1; i <= n - 2;i+=2) {
            cout << -1 << " " << 3 << " ";
        }

        if(n % 2) cout << -1 << endl;
        else cout << -1 << " " << 2 << endl;
    }
    return 0;
}

