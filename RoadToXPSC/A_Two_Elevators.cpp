#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int d = abs(b - c) + (c);
        if(a == d) cout << 3 << endl;
        else if(a < d) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;

}

