#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> vec(n, vector<int>(m));
        vector<int> row;
        vector<int> col;

        int mx_val = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> vec[i][j];
                if(vec[i][j] > mx_val){
                    mx_val = vec[i][j];
                }
            }
        }

        int check = 0;
        int dup_row = -1,dup_col = -1;
        int mx_count = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if(vec[i][j] == mx_val){
                    count++;
                }
            }
            mx_count += count;
            row.push_back(count);
            if(count > 1) {
                check++;
                dup_row = i;
            }
        }

        if(mx_count < 3) {
            cout << mx_val - 1 << endl;
            continue;
        }
        
        if(check > 1) {
            cout << mx_val << endl;
            continue;
        }

        for (int j = 0; j < m && dup_row != -1; j++) {
            vec[dup_row][j]--;
        }
        
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << vec[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // cout << dup_row << endl;

        check = 0;
        for (int i = 0; i < m; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if(vec[j][i] == mx_val){
                    count++;
                }
            }
            col.push_back(count);
            if(count > 1) {
                check++;
                dup_col = i;
            }
        }

        if(check > 1) {
            cout << mx_val << endl;
            continue;
        }

        // for(int i : col) cout << i << endl;

        for (int j = 0; j < n && dup_col != -1; j++) {
            vec[j][dup_col]--;
        }

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << vec[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        mx_count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(vec[i][j] == mx_val){
                    mx_count++;
                }
            }
        }

        if(mx_count == 0) cout << mx_val - 1 << endl;
        else if(mx_count == 1 && dup_row == -1) cout << mx_val - 1 << endl;
        else if(mx_count == 1 && dup_col== -1) cout << mx_val - 1 << endl;
        else cout << mx_val << endl;
    }
    return 0;

}

