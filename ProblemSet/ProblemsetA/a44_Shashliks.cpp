#include<bits/stdc++.h>
using namespace std;

int solve(int k, int a, int b, int x, int y) {
    int res = 0;
    int temp;
    if(k >= a) {
        temp = (k - a) / x;
        res += temp;
        k = k - temp * x;
        if(k >= a){
            k = k - x;
            res++;
        }
    }

    if(k >= b){
        temp = (k - b) / y;
        res += temp;
        k = k - temp * y;
        if(k >= b){
            k = k - y;
            res++;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int k, a,b,x,y;
        cin >> k >> a >> b >> x >> y;

        int res;
        if(x <= y) {
            res = solve(k,a,b,x,y);
        } else{
            res = solve(k,b,a,y,x);
        } 

        cout << res << endl;
    }
    return 0;
}

