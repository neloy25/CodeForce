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

        map<int,int> mp;

        for(int i = 0; i < n;i++) {
            int val;
            cin >> val;
            mp[val]++;
        }

        if(mp.size() > 2) {
            cout << "No\n";
        } else if(mp.size() == 1) {
            cout << "Yes" << endl;
        } 
        else {
            auto it = mp.begin();
            int a = it->second;

            if (a == n/2  || a == (n+1)/2)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}

