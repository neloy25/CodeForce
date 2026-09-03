#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl 

void solve() {
    int n;
    cin >> n;

    int d = 1;
    int flag;
    int mx_dis = 1, node1 = 1, node2 = 1;
    
    for(int i = 2; i <= n; i++) {
        cout << "? 1 " << i << " " << d nl;
        cin >> flag;
        if(flag == -1) exit(0); 
        
        while(flag) {
            node1 = i;
            mx_dis = d;
            d++;
            cout << "? 1 " << i << " " << d nl;
            cin >> flag;
            if(flag == -1) exit(0);
        }
    }

    for(int i = 1; i <= n; i++) {
        if (i == node1) continue;
        
        cout << "? " << node1 << " " << i << " " << d nl;
        cin >> flag;
        if(flag == -1) exit(0);
        
        while(flag) {
            node2 = i;
            mx_dis = d;
            d++;
            cout << "? " << node1 << " " << i << " " << d nl;
            cin >> flag;
            if(flag == -1) exit(0);
        }
    }
    
    cout << "! " << node1 << " " << node2 << " " << mx_dis nl;
}

int main() {

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}