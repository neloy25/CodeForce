#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        int res = 0;
        for(int i = 0,k= 0; i < n; i++){
            if(a[k] > b[i]){
                res++;
            } else{
                k++;
            }
        }

        cout << res << endl;
    }
    return 0;

}

