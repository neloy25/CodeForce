#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;

        int scrn;
        if(y % 2) {
            scrn  = (y + 1) / 2;
            x -= ((scrn - 1) * 7 + 11);
        } else {
            scrn  = y / 2;
            x -= (scrn * 7);
        }

        if(x > 0) {
            scrn += (x + 14) / 15;
        }
        cout << scrn << endl;
    }
    return 0;

}

