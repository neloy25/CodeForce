#include <bits/stdc++.h>
using namespace std;

int greatestDivisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return n / i;
    }
    return n;
}

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
        vector<int> vec(n);
        iota(vec.begin(), vec.end(), 1);

        for (int i = n - 1; i > 2; i--)
        {
            int tmp = greatestDivisor(i + 1);
            swap(vec[i], vec[tmp - 1]);
        }

        for (int val : vec)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
