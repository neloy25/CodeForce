#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << '\n';
        } 
        else if (a > b) {
            if ((a ^ 1) == b) cout << y << '\n';
            else cout << -1 << '\n';
        } 
        else {
            int d = b - a;
            int k = d / 2;
            long long cost1 = 1LL * d * x;            
            long long cost2 = 1LL * k * (x + y);      
            if (d % 2) cost2 += x;                   
            cout << min(cost1, cost2) << '\n';
        }
    }
    return 0;
}
