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
        for(auto &x: arr) cin >> x;
        int left = 0,right = n - 1;
        int res = 0;
        while(left < right){
            if(arr[left] == 1 && arr[right] == 0){
                res++;
                left++;
                right--;
            } else if(arr[left] == 1){
                right--;
            } else{
                left++;
            }
        }
        cout << res << endl;
    }
    return 0;
}