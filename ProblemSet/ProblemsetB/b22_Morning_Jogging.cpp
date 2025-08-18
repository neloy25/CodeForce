#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> data(n,vector<int>(m));
        vector<pair<int,int>> min_data;

        for(int i = 0 ; i < n;i++) {
            for(int j = 0; j < m;j++) {
                cin >> data[i][j];
                min_data.push_back(make_pair(data[i][j],i));
            }
        }

        for(int i = 0 ; i < n;i++) {
            sort(data[i].begin(),data[i].end()); 
        }

        sort(min_data.begin(),min_data.end());
        vector<vector<int>> res(n,vector<int>(m));

        for(int i = 0; i < m; i++) {
            int val = min_data[i].first;
            int idx = min_data[i].second;

            for(int j = 0; j < n; j++) {
                if(j == idx) {
                    res[j][i] = val;
                } else {
                    res[j][i] = data[j].back();
                    data[j].pop_back();
                }
            }
        }

        for(int i = 0 ; i < n;i++) {
            for(int j = 0; j < m;j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

