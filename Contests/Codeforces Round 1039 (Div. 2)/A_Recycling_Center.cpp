#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,c; cin >> n >> c;
        priority_queue<int> q;
        int coin = 0;
        for(int i = 0; i < n; i++) {
            int val; cin >> val;
            if(val > c) coin++;
            else q.push(val);
        }

        int mul_factor = 1;
        while(!q.empty()) {
            int val = q.top() * mul_factor;
            if(val > c) coin++;
            else mul_factor *= 2;
            q.pop();
        }

        cout << coin << endl;
    }
    return 0;

}

