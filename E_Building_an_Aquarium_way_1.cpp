#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> arr(n);
        for(auto &val : arr) cin >> val;
        sort(arr.begin(),arr.end());
        vector<long long> pre(n+1);
        pre[0] = 0;
        for(int i = 0; i < n; i++){
            pre[i + 1] = pre[i] + arr[i];
        }

        long long left = 0, right = arr[0] + x + 1;
        long long res = 0;
        while(left <= right){
            long long h = (left + right) / 2;
            int l = 0, r = n - 1;
            int idx = n;

            while(l <= r){
                int mid = (l + r) / 2;
                if(arr[mid] >= h){
                    idx = mid;
                    r = mid - 1;
                } else{
                    l = mid + 1;
                }
            }


            long long sum = 1LL * h * idx - pre[idx];
            if(sum > x) right = h - 1;
            else if(sum < x) {
                res = h;
                left = h + 1;
            } else{
                res = h;
                break;
            }
        }

        cout << res << endl;

    }
    return 0;

}

