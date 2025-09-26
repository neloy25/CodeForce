#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;
        if(a > 2 * b + 2 || b > 2 * a + 2 || c > 2 * d + 2 || d > 2 * c + 2) {
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
    return 0;
}

