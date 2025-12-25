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
        for(auto &x : v) cin >> x;

        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] % 2) odd++;
            else even++;
        }

        if(odd && even) {
            sort(v.begin(),v.end());
        }

        for(int val : v) {
            cout << val << " ";
        }

        cout << endl;
    }
    return 0;
}

