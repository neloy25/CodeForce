#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll start = 0;
bool cmp(const vector<ll>& a, const vector<ll>& b) {
    int n = a.size(), m = b.size();
    if (n <= start || m <= start) return n > m;

    for (int j = start; j < min(n, m); j++) {
        if (a[j] != b[j])
            return a[j] < b[j];
    }

    return n > m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<ll>> arr(n); 

        ll sz = 0;
        for(int i = 0; i < n; i++) {
            ll k;
            cin >> k;
            sz = max(sz,k);
            for(int j = 0; j < k; j++) {
                ll val;
                cin >> val;
                arr[i].push_back(val);
            }
        }

        sort(arr.begin(),arr.end());

        for(int i = 0; i < sz; i++) {
            start = i;
            if(i >= arr[0].size()) {
                sort(arr.begin(),arr.end(),cmp);
            }

            cout << arr[0][i] << " ";
        }

        cout << endl;
    }
    return 0;
}

