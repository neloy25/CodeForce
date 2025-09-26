#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> arr(n);
        for(auto &x : arr) cin >> x;

        int h = arr[k - 1];
        int water = 1;

        sort(arr.begin(),arr.end());
        int left = 0, right = n -1;
        int idx;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(arr[mid] == h) {
                idx = mid;
                break;
            } else if(arr[mid] > h) {
                right = mid - 1;
            } else{
                left = mid + 1;
            }
        }

        bool flag = true;
        for(int i = idx; i < n - 1; i++) {
            int life = arr[i] - water + 1;
            int time = arr[i + 1] - arr[i];
            if(time > life) {
                flag = false;
                break;
            }

            water = water + time;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

