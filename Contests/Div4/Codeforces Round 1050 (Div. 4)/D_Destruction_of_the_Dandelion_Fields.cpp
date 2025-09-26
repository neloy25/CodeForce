#include<bits/stdc++.h>
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

        vector<int> v(n);
        vector<int> odd;
        for(auto &x : v) cin >> x;

        long long sum = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] % 2) odd.push_back(v[i]);
            sum+= v[i];
        }

        sort(odd.begin(),odd.end());

        if(odd.size() == 0) {
            cout << 0 << endl;
            continue;
        } 

        for(int i = 0; i < odd.size()/ 2; i++) {
            sum-= odd[i];
        }

        cout << sum << endl;
    }
    return 0;
}

