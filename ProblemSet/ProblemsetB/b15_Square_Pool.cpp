#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        int res = 0;
        while(n--){
            int dx, dy, x,y;
            cin >> dx >> dy >> x >> y;
            if(x == y && x + y == s) {
                res++;
            }
            else if(x == y && dx == dy){
                res++;
            } else if(x + y == s && dx != dy){
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}

