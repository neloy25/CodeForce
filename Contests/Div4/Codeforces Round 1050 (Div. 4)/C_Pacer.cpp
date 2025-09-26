#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        int res = m;

        int pos = 0;
        int prev = 0;
        for(int i = 0; i < n; i++) {
            int a , b;
            cin >> a >> b;

            int diff = a - prev;
            if(diff % 2 == 0 && b != pos) res--;
            if(diff % 2 != 0 && b == pos) res--;

            prev = a;
            pos = b;
        }

        cout << res << endl;
    }
    return 0;
}

