#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> a;
        for(int i = 0; i < n; i++){
            int val;
            cin >> val;
            a.insert(val);
        }
        int sz = a.size();
        if(n % 2 + sz % 2 == 1) cout << sz - 1 << endl;
        else cout << sz << endl;
    }
    return 0;

}

