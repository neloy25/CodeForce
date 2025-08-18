#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,m,x;
        cin >> n >> m >> x;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(int i = 1; i <= m; i++) {
            pq.push(make_pair(0,i));
        }

        cout << "YES" << endl;
        for(int i = 0; i < n; i++) {
            pair<int,int> tmp = pq.top();
            pq.pop();
            cout << tmp.second << " ";
            tmp.first += v[i];
            pq.push(tmp); 
        }
        cout << endl;
    }
    return 0;
}

