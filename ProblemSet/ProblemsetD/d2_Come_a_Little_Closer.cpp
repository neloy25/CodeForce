#include<bits/stdc++.h>
using namespace std;

class Monster{
public:
    int x;
    int y;
};

bool cmp_r(Monster l, Monster r){
    if(l.x == r.x) return l.y < r.y;
    return l.x < r.x;
}

bool cmp_c(Monster l, Monster r){
    if(l.y == r.y) return l.x < r.x;
    return l.y < r.y;
}

long long rec(int l, int r, int t, int d,int n){
    long long row_diff = (r - l) + 1;
    long long col_diff = (d - t) + 1;
    if(row_diff * col_diff < n){
        return min((row_diff + 1) * col_diff, row_diff * (col_diff + 1));
    }
    return row_diff * col_diff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <Monster> mons(n);

        for(int i = 0; i < n; i++){
            cin >> mons[i].x >> mons[i].y;
        }

        vector <Monster> rows(mons);
        vector <Monster> cols(mons);

        sort(rows.begin(), rows.end(),cmp_r);
        sort(cols.begin(), cols.end(),cmp_c);
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        
        long long res = rec(rows[0].x,rows[n - 1].x, cols[0].y , cols[n -1].y,n);
        long long temp;
        if(rows[0].x == cols[0].x) temp = rec(rows[1].x,rows[n - 1].x, cols[1].y , cols[n -1].y,n);
        else if(rows[0].x == cols[n -1].x) temp = rec(rows[1].x,rows[n - 1].x, cols[0].y , cols[n - 2].y,n);
        else temp = rec(rows[1].x,rows[n - 1].x, cols[0].y , cols[n -1].y,n);
        res = min(temp,res);

        if(rows[n - 1].x == cols[0].x) temp = rec(rows[0].x,rows[n - 2].x, cols[1].y , cols[n -1].y,n);
        else if(rows[n - 1].x == cols[n -1].x) temp = rec(rows[0].x,rows[n - 2].x, cols[0].y , cols[n - 2].y,n);
        else temp = rec(rows[0].x,rows[n - 2].x, cols[0].y , cols[n -1].y,n);
        res = min(temp,res);

        if(cols[0].y == rows[0].y) temp = rec(rows[1].x,rows[n - 1].x, cols[1].y , cols[n -1].y,n);
        else if(cols[0].y == rows[n - 1].y) temp = rec(rows[0].x,rows[n - 2].x, cols[1].y , cols[n -1].y,n);
        else temp = rec(rows[0].x,rows[n - 1].x, cols[1].y , cols[n -1].y,n);
        res = min(temp,res);

        if(cols[n - 1].y == rows[0].y) temp = rec(rows[1].x,rows[n - 1].x, cols[0].y , cols[n - 2].y,n);
        else if(cols[n - 1].y == rows[n - 1].y) temp = rec(rows[0].x,rows[n - 2].x, cols[0].y , cols[n - 2].y,n);
        else temp = rec(rows[0].x,rows[n - 1].x, cols[0].y , cols[n - 2].y,n);
        res = min(temp,res);
        cout << res << endl;
    }
    return 0;
}

