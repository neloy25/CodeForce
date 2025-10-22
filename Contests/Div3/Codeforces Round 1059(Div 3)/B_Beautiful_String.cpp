#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> res;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            res.push_back(i + 1);
        }
    }

    cout << res.size() << endl;
    for(int val : res) {
        cout << val << " ";
    }
    cout << endl;
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

