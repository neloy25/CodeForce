#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        if(x == y) cout << "No" << endl;
        else if(x < y) {
            cout << ((x == y - 1) ? "Yes" : "No") << endl;
        } else{
            cout << ((x - y + 1) % 9 == 0 ? "Yes" : "No") << endl;
        }
    }
    return 0;

}

