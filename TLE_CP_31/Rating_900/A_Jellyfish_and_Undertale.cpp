#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;

        vector<int> v(n);
        for(auto &x : v) cin >> x;

        long long sum = b;
        for(int val : v) {
            sum += min(a - 1,val);
        }

        cout << sum << endl;
    }
    return 0;
}

