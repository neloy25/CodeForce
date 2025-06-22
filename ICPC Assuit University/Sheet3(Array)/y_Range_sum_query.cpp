#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    vector<long long>arr(n);
    vector<long long>prefix_sum(n);
    for(auto &x : arr) cin >> x;

    prefix_sum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    while(q--){
        int start, end;
        cin >> start>> end;
        if(start == 1) cout << prefix_sum[end - 1] << endl;
        else{
            cout << prefix_sum[end - 1] - prefix_sum[start - 2] << endl;
        }
    }
    return 0;

}

