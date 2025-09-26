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
        vector<int>arr(n);
        for(auto &x : arr) cin >> x;
        string res(n,'0');

        res[0] = '1'; res[n - 1] = '1';
        int pre = arr[0];
        for(int i = 1; i < n - 1; i++){
            if(arr[i] < pre){
                pre = arr[i];
                res[i] = '1';
            }
        }

        int suf = arr[n - 1];
        for(int i = n - 1; i > 0; i--){
            if(arr[i] > suf){
                suf = arr[i];
                res[i] = '1';
            }
        }
        cout << res << endl;
    }
    return 0;

}

