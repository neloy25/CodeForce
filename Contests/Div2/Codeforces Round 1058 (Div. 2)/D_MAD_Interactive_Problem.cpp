#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(2 * n + 1,0);
    set<int> last;

    int query = 2;
    for(int i = 2; i <= 2 * n; i++) {
        cout << "? " << query << " ";
        for(int j = 1; j <= i; j++) {
            if(!v[j]) cout << j << " ";
        }
        cout << endl;
        cout.flush();
        int x;
        cin >> x;
        if(x) {
            v[i] = x;
            last.insert(i);
        }
        else query++;
    }

    for(int i = 1; i <= 2 * n; i++) {
        if(!v[i]) {
            set<int> first = last;
            first.insert(i);
            cout << "? " << first.size() << " ";
            for(int val : first) cout << val << " ";
            cout << endl;
            cout.flush();
            int x;
            cin >> x;
            v[i] = x;
            first = last;
        }
    }

    cout << "! ";
    for(int i = 1; i<= 2 * n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout.flush();
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

