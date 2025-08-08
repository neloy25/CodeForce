#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        string res;
        res.push_back('L');

        int prev = v[0];
        int l = 1, r = n - 1;
        while (l < r)
        {
            if (prev > v[l] && prev > v[r])
            {
                if (v[l] < v[r])
                {
                    res.push_back('L');
                    res.push_back('R');
                    prev = v[r];
                }
                else
                {
                    res.push_back('R');
                    res.push_back('L');
                    prev = v[l];
                }
            }
            else if (prev < v[l] && prev < v[r])
            {
                if (v[l] > v[r])
                {
                    res.push_back('L');
                    res.push_back('R');
                    prev = v[r];
                }
                else
                {
                    res.push_back('R');
                    res.push_back('L');
                    prev = v[l];
                }
            }
            else
            {
                res.push_back('L');
                res.push_back('R');
                prev = v[r];
            }
            l++;
            r--;
        }

        if(l == r) res.push_back('L');

        cout << res << endl;
    }
    return 0;
}
