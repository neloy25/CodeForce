#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll b[n];
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll a[n];
        a[0] = 1;
        ll unq = 1;

        for(ll i = 1; i < n; i++) {
            ll diff = b[i] - b[i - 1];

            if(diff <= 0 || i - diff < 0) {
                unq++;
                a[i] = unq;
            } else {
                a[i] = a[i - diff];
            }
        }

        for(ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

