#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        mat[0][i] = 1;
        mat[i][0] = 1;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }

    cout << mat[n - 1][n - 1];
    return 0;

}

