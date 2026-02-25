#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    string s;
    cin >> s;

    int f = s[0] - '0';
    int cnt = 0;
    vector<int> v;
    ll sum = 0;
    for(int i = 0; i < s.size(); i++) {
        v.push_back(s[i] - '0');
        sum+= (s[i] - '0');
        if(s[i] == f + '0') cnt++;
    }

    sort(v.begin(), v.end(), greater<int>());
    int res = 0;

    // cout << cnt nl;
    int i = 0;
    while(sum >= 10) {
        sum-=v[i];
        if(v[i] == f) {
            if(cnt == 1) sum++;
            cnt--;
        }
        i++;
    }
    cout << i nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}