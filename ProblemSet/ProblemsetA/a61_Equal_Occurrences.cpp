#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> feq(n + 1,0);

        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            feq[val]++;
        }

        vector<int> res;
        for(int i = 0; i <= n; i++) {
            if(feq[i] != 0) res.push_back(feq[i]);
        }

        int x = res.size();

        sort(res.begin(),res.end());

        int tmp = 0;
        for(int i = 0; i < x; i++) {
            tmp = max(res[i] * (x - i),tmp);
        }

        cout << tmp << endl;
    }
    return 0;
}

