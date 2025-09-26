#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;

        if(x % 2 == 0) cout << 0 << endl;
        else cout << n << endl;
    }
    return 0;
}

