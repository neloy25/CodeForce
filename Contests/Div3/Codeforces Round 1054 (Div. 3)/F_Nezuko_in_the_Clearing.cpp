#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll n) {
    return (n * (n + 1)) / 2;
}

ll health(ll d,ll x) {
    ll a = d / (x + 1);
    ll b = d % (x + 1);

    ll rem = (x - b + 1) * sum(a) + b * sum(a + 1);

    return rem;
}

ll findx(ll h, ll d) {
    ll l = 0,r = sum(d);
    ll x;

    while(l <= r) {
        ll mid = (l + r) / 2;

        if(health(d,mid) >= mid + h) {
            l = mid + 1;
        } else {
            r = mid - 1;
            x = mid;
        }
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll h,d;
        cin >> h >> d;

        cout << findx(h,d) + d << endl;
    }
    return 0;
}

