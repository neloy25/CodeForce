#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,idx,k;
        cin >> n >> idx >> k;
        vector<int> arr(n);
        for(auto &x: arr) cin >> x;
        int mx = *(max_element(arr.begin(),arr.end()));
        if(k == 1){
            if(arr[idx - 1] == mx) cout << "YES\n";
            else cout << "NO\n";
        } else{
            cout << "YES\n";
        }

    }
    return 0;

}

