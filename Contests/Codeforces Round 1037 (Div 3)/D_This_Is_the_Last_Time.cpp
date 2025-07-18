#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<pair<pair<int, int>, int>> x(n);
        for(int i = 0; i < n; i++){
            cin >> x[i].first.first >> x[i].first.second >> x[i].second;
        }
        sort(x.begin(), x.end());

        int cur = k;
        for(int i = 0; i < n; i++){
            if(x[i].first.first <= cur && x[i].first.second >= cur){
                cur = max(cur, x[i].second);
            }
        }
        cout << cur << "\n";
    }
    return 0;
}