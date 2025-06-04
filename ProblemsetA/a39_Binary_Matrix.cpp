#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r,c;
        cin >> r >> c;
        char ch[r][c];
        for(int  i = 0; i < r; i++){
            for (int j = 0; j < c; j++) {
                cin >> ch[i][j];
            }
        }

        int row = 0; int col = 0;
        for(int  i = 0; i < r; i++){
            int temp = 0;
            for (int j = 0; j < c; j++) {
                temp = temp ^ (ch[i][j] - '0');
            }
            row += temp;
        }

        for(int  i = 0; i < c; i++){
            int temp = 0;
            for (int j = 0; j < r; j++) {
                temp = temp ^ (ch[j][i] - '0');
            }
            col += temp;
        }

        cout << max(row,col) << endl;
    }
    return 0;
}