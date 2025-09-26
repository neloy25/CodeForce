#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<pair<ll,ll>> ab(n);
        ll total_a = 0,total_b = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') total_a++;
            else total_b++;

            ab[i] = {total_a,total_b};
        }

        ll step_a = 0, step_b = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') {
                ll f = i - ab[i].first + 1;
                ll b = n - total_a + ab[i].first - i - 1;

                step_a += min(f,b);
            }

            if(s[i] == 'b') {
                ll f = i - ab[i].second + 1;
                ll b = n - total_b + ab[i].second - i - 1;

                step_b += min(f,b);
            }
        }

        cout << min(step_a,step_b) << endl;
    }
    return 0;
}

