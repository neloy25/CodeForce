#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,s,p;
        cin >> n >> s >> p;
        cout << 1 + n - min(s,p) << endl;
    }
    return 0;
}

