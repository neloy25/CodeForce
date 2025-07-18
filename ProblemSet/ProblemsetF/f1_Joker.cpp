#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> arr(q);
        for(auto &x: arr) cin >> x;
        pair<int,int> mid = {0,0};
        int start = 0, end = n + 1;
        if(arr[0] < m) mid = {m - 1,m};
        else if(arr[0] > m) mid = {m,m + 1};
        else {
            start++;
            end--;
            cout << 2 << " ";
            for(int i = 1; i < q; i++){
                int res = 0;
                if(arr[i] > start) start++;
                if(arr[i] < end) end--;
                if(start >= end) start = end - 1;
                res += start;
                res += (n - end + 1); 
                cout << res << " ";
            }
            cout << endl;
            continue;
        }

        cout << 2 << " ";
        for(int i = 1; i < q;i++){
            int res = 0;
            if(arr[i] >= mid.first && arr[i] <= mid.second){
                start++;
                end--;
            } else if(arr[i] < mid.first){
                mid.first--;
                if(end != n + 1) end--;
                if(start != 0 && start < arr[i]) start++;
            } else{
                mid.second++;
                if(start != 0) start++;
                if(end != n + 1 && end > arr[i]) end--;
            }

            if(start >= mid.first) start = mid.first - 1;
            if(end <= mid.second) end = mid.second + 1;

            res += (mid.second - mid.first + 1);
            res += start;
            res += (n - end + 1); 
            cout << res << " ";
        }
        cout << endl;
    }
    
    return 0;
}

