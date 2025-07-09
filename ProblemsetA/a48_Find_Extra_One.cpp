#include<bits/stdc++.h>
using namespace std;

class Axis{
    public:
    int x;
    int y;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int pos = 0, neg = 0;
    while(t--){
        Axis xy;
        cin >> xy.x >> xy.y;
        if(xy.x > 0) pos++;
        else neg++;
    }

    if(pos > 1 && neg > 1) cout << "No";
    else cout << "Yes";
    return 0;
}

