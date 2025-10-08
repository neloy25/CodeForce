#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool same = true;

    string cape(n,'?');
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) continue;
        same = false;

        if(abs(a[i] - a[i - 1]) > 1) {
            cout << 0 << endl;
            return;
        }

        if(a[i] - a[i - 1] == 1) {
            cape[i] = 'L';
            cape[i - 1] = 'L';
        } 
        if(a[i] - a[i - 1] == -1) {
            if(cape[i] == 'L' || cape[i - 1] == 'L') {
                cout << 0 << endl;
                return;
            }
            cape[i] = 'R';
            cape[i - 1] = 'R';
        }
    }

    if(same == true) {
        if(n % 2) {
            if(a[0] == (n + 1) / 2) cout << 2 << endl;
            else cout << 0 << endl;
        } else {
            if(a[0] == (n / 2) || a[0] == (n / 2) + 1) cout << 1 << endl;
            else cout << 0 << endl;
        }

        return;
    }

    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i-1]) {
            if (cape[i] != '?' && cape[i-1] != '?') {
                if (cape[i] == cape[i-1]) { cout << 0 << '\n'; return; }
            } else if (cape[i] == '?' && cape[i-1] != '?') {
                cape[i] = (cape[i-1] == 'L' ? 'R' : 'L');
            } else if (cape[i] != '?' && cape[i-1] == '?') {
                cape[i-1] = (cape[i] == 'L' ? 'R' : 'L');
            }
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] == a[i+1]) {
            if (cape[i] != '?' && cape[i+1] != '?') {
                if (cape[i] == cape[i+1]) { cout << 0 << '\n'; return; }
            } else if (cape[i] == '?' && cape[i+1] != '?') {
                cape[i] = (cape[i+1] == 'L' ? 'R' : 'L');
            } else if (cape[i] != '?' && cape[i+1] == '?') {
                cape[i+1] = (cape[i] == 'L' ? 'R' : 'L');
            }
        }
    }

    vector<pair<int,int>> pre(n + 1,{0,0});

    for(int i = 1; i <= n; i++) {
        pre[i].first = pre[i - 1].first + (cape[i - 1] == 'L');
        pre[i].second = pre[i - 1].second + (cape[i - 1] == 'R');
    }

    for(int i = 0; i < n;i++) {
        int R = pre[n].second - pre[i + 1].second;
        int L = pre[i].first;

        if(L + R + 1 != a[i]) {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
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

