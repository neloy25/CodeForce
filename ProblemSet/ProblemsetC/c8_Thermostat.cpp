#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int l,r,x; cin >> l >> r >> x;
        int a,b; cin >> a >> b;

        if(a == b) {
            cout << 0 << endl;
            continue;
        } else if(abs(a - b) >= x) {
            cout << 1 << endl;
            continue;
        } else if(a + x > r && a - x < l) {
            cout << -1 << endl;
        } else if(l + x > b && r - x < b) {
            cout << -1 << endl;
        } else if(l + x > b){
            if(a > b){
                if(a + x <= r) cout << 2 << endl;
                else cout << 3 << endl;
            } else{
                cout << 2 << endl;
            }
        } else if(r - x < b){
            if(a < b){
                if(a - x >= l) cout << 2 << endl;
                else cout << 3 << endl;
            } else{
                cout << 2 << endl;
            }
        } else{
            cout << 2 << endl;
        }
    }
    return 0;

}

