#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        char arr[10][10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> arr[i][j];
            }
        }

        int res = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(arr[i][j] == 'X'){
                    int row = i + 1;
                    int col = j + 1;
                    if(row > 5) row = 11 - row;
                    if(col > 5) col = 11 - col;
                    res += min(row,col);
                }
            }
        }
        cout << res << endl;
    }
    return 0;

}

