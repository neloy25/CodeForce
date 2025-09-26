#include <bits/stdc++.h>
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
        vector<int> arr(n);
        for(auto &x: arr) cin >> x;

        long long mul = 1;
        int min_val = arr[0];
        int zero_count = 0;
        for(int x : arr){
            if(x == 0) zero_count++;

            else {
                if(x < min_val){
                    min_val = x;
                }

                mul = mul * x;
            }
            
        }

        if(zero_count == 0){
            mul = (mul / min_val) * (min_val + 1);
            cout << mul << '\n';
        } else if(zero_count == 1){
            cout << mul << '\n';
        } else{
            cout << 0 << endl;
        }
    }
    return 0;
}
