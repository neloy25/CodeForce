#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,h;
        cin >> n >> m >> h;
        vector<int> v(n);
        vector<pair<int,int>> add(n);
        for(auto &x : v) cin >> x;

        for(int i = 0; i <n; i++) {
            add[i] = {v[i],0};
        }
        vector<pair<int,int>> bc(m + 1);

        for(int i = 0; i < m; i++) {
            int a,b;
            cin >> a >> b;
            a--;
            bc[i] = {a,b};
        }

        int reset = -1;
        for(int i = 0; i < m; i++) {
            auto [idx,val] = bc[i];

            // cout << add[idx].second << " " << reset << endl;
            if(add[idx].second <= reset) {
                // cout << i << endl;
                add[idx].first= v[idx] + val;
                add[idx].second = i;
            } else {
                add[idx].first+=val;
            }
            if(add[idx].first > h) reset = i;
        }
        // cout << reset << endl;
        for(int i = 0; i < n; i++) {
            if(add[i].second <= reset) add[i].first = v[i];
            cout << add[i].first << " ";
        }
        cout << endl;
    }
}