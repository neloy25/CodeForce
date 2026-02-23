#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int n;
    string s;
    cin >> n >> s;


    int cnt = 0;
    int one = 0;
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            if(one == 0) res+=((cnt + 1) / 3);
            else res+=(cnt / 3);
            one++;
            cnt = 0;
        }else{
            cnt++;
        }
    }
    if(one == 0) res+=(cnt + 2)/3;
    else res+=(cnt+ 1)/3;
    cout << res + one nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}