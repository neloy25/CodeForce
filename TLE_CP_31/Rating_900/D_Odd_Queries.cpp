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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        vector<ll> pre_sum(n + 1);
        pre_sum[0] = 0;
        for (auto &x : v)
            cin >> x;

        for (int i = 1; i <= n; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + v[i - 1];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            ll num = r - l + 1;
            ll sub_sum = pre_sum[r] - pre_sum[l - 1];

            if (pre_sum[n] % 2 != ((sub_sum + k * num) % 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
