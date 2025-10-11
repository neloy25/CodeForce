#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
    }

    cout << s.size() << endl;
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

