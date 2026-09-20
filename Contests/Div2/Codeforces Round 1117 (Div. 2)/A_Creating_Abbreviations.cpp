#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, m;
    cin >> n >> m;

    set<char> s;
    for(int i = 0; i < n; i++) {
        string str; cin >> str;
        if(str[0] >= 'a' && str[0] <= 'z') s.insert(str[0]-32);
        else s.insert(str[0]);
    }

    bool ok = true;
    for(int i = 0; i < m; i++) {
        string str; cin >> str;
        for(char c : str) {
            if(!s.count(c)) {
                ok = false;
            }
        }
    }
    if(ok) yes;
    else no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}