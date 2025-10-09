#include<bits/stdc++.h>
using namespace std;

bool on = false;
void query(int x,int y) {
    cout << x << " " << y << endl;
    cout.flush();
    int g;
    cin >> g;
    if(g == 1) on = true;
}

void solve() {
    int n;
    cin >> n;

    for(int diff = 1; diff < n;diff++) {
        for(int i = 1; i <= n - diff; i++){
            if(!on) query(i,i + diff);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
        on = false;
    }
    return 0;
}

