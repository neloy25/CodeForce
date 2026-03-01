#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int N = 50003;
vector<int> divisors[N];

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<bool>> feq(n, vector<bool> (26, false));
    for(int i = 0; i< m; i++) {
        string s;
        cin >> s;
        for(int i = 0; i < n; i++) {
            feq[i][s[i] - 'a'] = true;
        }
    }

    string res;
    for(int d : divisors[n]) {
        string tmp;
        bool last = true;
        for(int i = 0; i < d; i++) {
            bool flag = false;
            for(int j = 0; j < 26; j++) {
                bool found = true;
                for(int k = i; k < n; k+=d) {
                    if(!feq[k][j]) {
                        found = false;
                        break;
                    }
                }
                if(found) {
                    tmp.push_back((char)(j + 'a'));
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                last = false;
                break;
            }
        }
        if(last) {
            res = tmp;
            break;
        }
    }

    int d = res.size();
    for(int i = 0; i < n / d; i++) {
        cout << res;
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j+=i) {
            divisors[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}