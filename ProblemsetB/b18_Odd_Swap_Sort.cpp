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
        vector<int> arr(n);
        for(auto &x : arr) cin >> x;

        int odd = INT_MIN;
        int even = INT_MIN;

        bool flag = true;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2){
                if(arr[i] < odd) {
                    flag = false;
                    break;
                } else{
                    odd = arr[i];
                }
            } else{
                if(arr[i] < even) {
                    flag = false;
                    break;
                } else{
                    even = arr[i];
                }
            }
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;

}

