#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,x,y;
        cin >> a >> x >> y;
        if(a > min(x,y) && a < max(x,y)){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }
    return 0;

}

