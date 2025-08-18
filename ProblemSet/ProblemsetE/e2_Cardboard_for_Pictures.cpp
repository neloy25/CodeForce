#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> data(n);
        for (auto &x : data)
            cin >> x;

        __int128 sqsum = 0, sum = 0;
        for (ll val : data)
        {
            sqsum += (__int128)val * val;
            sum += val;
        }

        __int128 rem = (__int128)(c)-sqsum;
        rem /= 4;

        __int128 discriminant = sum * sum + 4 * (__int128)n * rem;
        long double sqrt_discriminant = sqrtl((long double)discriminant);
        __int128 ans = (-sum + (__int128)(sqrt_discriminant)) / (2 * n);

        cout << (long long)ans << endl;
    }
    return 0;
}
