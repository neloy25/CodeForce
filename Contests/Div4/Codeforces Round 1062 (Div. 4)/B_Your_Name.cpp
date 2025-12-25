#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    cout << (s == t ? "YES\n" : "NO\n");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

