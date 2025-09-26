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

        long long left = 0, right = arr[0] + x + 1;
        long long res = 0;
        while(left <= right){
            long long h = (left + right) / 2;
            long long sum = 0;
            for(int val: arr){
                if(h > val) sum += (h - val);
            }

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

