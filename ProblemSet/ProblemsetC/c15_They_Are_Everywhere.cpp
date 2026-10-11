#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());
    map<char, int> mp;
    deque<pair<char, int>> dq;

    int unq = st.size();
    // cout << unq nl;

    int ans = n + 1;
    for(int i = 0; i < n; i++) {
        char c = s[i];
        mp[c]++;

        while(!dq.empty() && mp[dq.front().first] > 1) {
            // cout << i << " " << dq.front().first << " " << mp[dq.front().first] << endl;
            mp[dq.front().first]--;
            dq.pop_front();
        }
        dq.push_back({c, i});
        if(mp.size() == unq) {
            // cout << i << " " << dq.front().second nl;
            int res = (i - dq.front().second + 1); 
            ans = min(res, ans);
        }
    }
    cout << ans nl;

    return 0;
}