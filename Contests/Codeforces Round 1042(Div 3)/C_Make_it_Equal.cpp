#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k; 
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        multiset<int> s;
        multiset<int> t;

        for(int i = 0; i < n; i++) {
            s.insert(a[i] % k);
            t.insert(b[i] % k);
        }

        // for(int val : s) {
        //     cout << val << " ";
        // }

        // cout << endl;

        // for(int val : t) {
        //     cout << val << " ";
        // }
        
        bool flag = true;
        for(int val : s) {
            auto it1 = t.find(val);
            auto it2 = t.find(k - val);
            if (it1 != t.end()) {
                t.erase(it1);
            } else if(it2 != t.end()) {
                t.erase(it2);
            } else{
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
