#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        for(auto &x : arr) cin >> x;

        int temp = k;
        int res1 = 0;
        for(int i : arr){
            res1 += abs(i - temp);
            temp = i;
        }

        temp = k;
        int res2 = 0;
        for(int i = n - 1; i >= 0; i--){
            res2 += abs(arr[i] - temp);
            temp = arr[i];
        }

        cout << min(res1,res2) << endl;
    }
    return 0;

}

