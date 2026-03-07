#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    string s,t;
    cin >> s;
    t = s;
    int n = s.size();
    queue<int> q;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') q.push(i);
    }

    for(int i = 0; i < n && !q.empty();  i++) {
        if(s[i] == '0') {
            t[i] = '1';
            t[q.front()] = '0';;
            q.pop();
        }
    }
    
    int i = 0, j = 0, ans = 0;
    while(i < n) {
        if(s[j] == t[i]) {
            i++;
            ans++;
        } else {
            i++;
            j++;
        }
    }

    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}