#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        if(x % 2 || x < 4) {
            cout << -1 << endl;
            continue;
        }

        ll b = x / 6;
        if(x % 6 == 2) b = (x / 6) - 1;
        cout << (x - 2 * b) / 4 << " " << x / 4 << endl;
    }
    return 0;
}

