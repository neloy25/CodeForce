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
        vector<int> feq(n + 1,0);
        vector<int> res(n + 1);
        int first_mex = n + 1;
        for(int val : arr) feq[val]++;
        for(int i = 0; i <= n; i++){
            if(feq[i] == 0){
                first_mex = i;
                break;
            }
        }

        int k = 1;
        res[0] = 1;
        for(int i = n; i > 0; i--){
            if(k > first_mex + 1) k--;
            res[i] = k;
            k++;  
        }

        for(int i = 0; i < first_mex; i++){
            for(int j = feq[i] - 1; j >= 1; j--){
                res[j]--;
                if(res[j] < 1) res[j] = 1; 
            }
        }
        
        for(int i = 0; i <= n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;

}

