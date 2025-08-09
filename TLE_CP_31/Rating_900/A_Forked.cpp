#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,x1,x2,y1,y2,x,y;
        cin >> a >> b;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        x = abs(x1 - x2);
        y = abs(y1 - y2);

        if((x == 2 * a && y == 2 * b) || (x == 2 * b && y == 2 * a)) cout << 1 << endl;
        else if(x == 0 && (y == 2 * a || y == 2 * b)) cout << 2 << endl;
        else if(y == 0 && (x == 2 * a || x == 2 * b)) cout << 2 << endl;
        else if(x == (a + b) && (y == (a + b) || y == abs(a - b))) cout << 2 << endl;
        else if(x == abs(a - b) && (y == (a + b) || y == abs(a - b))) cout << 2 << endl;
        else cout << 0 << endl;
    }
    return 0;

}

