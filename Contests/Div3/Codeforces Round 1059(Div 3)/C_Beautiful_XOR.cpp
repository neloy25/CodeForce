#include<bits/stdc++.h>
using namespace std;

int allOne(int n) {
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return n;
}

void solve() {
    int a,b;
    cin >> a >> b;

    int n = allOne(a);
    if(b > n) {
        cout << -1 << endl;
        return;
    }

    if(a == b) {
        cout << 0 << endl;
        return;
    }
    int x = a ^ b;

    if(x <= a) {
        cout << 1 << endl;
        cout << x << endl;
    } else {
        cout << 2 << endl;
        int tmp = (n + 1) >> 1;
        cout << (x ^ tmp) << " ";
        cout << tmp<< endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        // cout << (998 ^ 786) << endl;
        solve();
    }
    return 0;
}

