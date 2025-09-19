#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> nines;
    ll tmp = 10;
    for(int i = 0; i < 9; i++) {
        nines.push_back(tmp - 1);
        tmp *= 10;
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s = to_string(n);

        int idx = s.size();
        if(s[0] == '9') idx++;

        cout << nines[idx - 1] - n << endl;
    }
    return 0;
}

