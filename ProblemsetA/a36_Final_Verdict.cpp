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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum == n * k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

