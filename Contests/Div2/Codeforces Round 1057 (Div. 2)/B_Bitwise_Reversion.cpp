#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x,y,z;
    cin >> x >> y >> z;

    for(int i = 0; i < 32;i++) {
        int a = (x >> i) & 1;
        int b = (y >> i) & 1;
        int c = (z >> i) & 1;

        if(a + b + c == 2) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

