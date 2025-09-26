#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n , k; cin >> n >> k;
        vector<int> arr(n);
        for(auto &x : arr) cin >> x;

        int count = 0;
        int res = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1) {
                count = 0;
                continue;
            } 
            count++;
            if(count == k) {
                i++;
                count = 0;
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;

}

