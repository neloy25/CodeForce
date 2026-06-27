#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define st stack<ll>

void solve() {
    int n;
    cin >> n;

    vector<st> v;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        st s;
        for(int j = 0; j < m; j++) {
            int val;
            cin >> val;
            s.push(val);
        }
        v.push_back(s);
    }

    vector<ll> ans;
    set<ll> allowed,res;
    for(int i = 0; i < n; i++) allowed.insert(i);
    while(!allowed.empty()) {
        set<ll> tmpall = allowed;
        for(auto i : tmpall) {
            while(!v[i].empty()) {
                if(res.count(v[i].top())) {
                    v[i].pop();
                } else {
                    break;
                }
            }
            if(v[i].empty()) {
                allowed.erase(i);
            }
        }
        set<ll> idx = allowed;
        while(!idx.empty()) {
            ll mn = 1e7;
            for(auto i : idx) {
                mn = min(mn, v[i].top());
            }
            // cout << mn << endl;
            set<ll> tmp;
            for(auto i : idx) {
                if(v[i].top() == mn) {
                    tmp.insert(i);
                    if(!res.count(mn)) ans.push_back(mn);
                    res.insert(mn);
                }
            }
            idx = tmp;
            // for(auto val : idx) {
            //     cout << val << " ";
            // }
            // cout << endl;

            bool flag = false;
            for(auto i : idx) {
                while(!v[i].empty()) {
                    if(res.count(v[i].top())) {
                        v[i].pop();
                    } else {
                        break;
                    }
                }
                if(v[i].empty()) {
                    allowed.erase(i);
                    tmp.erase(i);
                    flag = true;
                    break;
                }
            }
            idx = tmp;
            if(flag) break;
            // if(cnt == 2) break;
            // cout << "for mn === " << mn nl;
            // for(int i = 0; i < n; i++) {
            //     while(!v[i].empty()) {
            //         cout << v[i].top();
            //         v[i].pop();
            //     }
            //     cout << endl;
            // }
            
            if(idx.size() == 1) {
                int i = *idx.begin();
                idx.erase(i);
                allowed.erase(i);
                while(!v[i].empty()) {
                    if(!res.count(v[i].top())) ans.push_back(v[i].top());
                    res.insert(v[i].top());
                    v[i].pop();
                }
            }
            // for(auto val : idx) {
            //     cout << val << " ";
            // }
            // cout << endl;
            // cout << mn << endl;
        }
    }
    for(auto val : ans) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}