#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1), odd(n + 1), even(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<ll> s;
    s.insert(0);
    odd[0] = 0, even[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            odd[i] = odd[i - 1] + v[i];
            even[i] = even[i - 1];
        }
        else
        {
            odd[i] = odd[i - 1];
            even[i] = even[i - 1] + v[i];
        }
        ll need = odd[i] - even[i];
        if (s.count(need))
        {
            yes;
            return;
        }
        s.insert(need);
    }
    no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}