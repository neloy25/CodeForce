#include <bits/stdc++.h>
using namespace std;

void swap_pos(int x, int n, vector<int> arr, vector<pair<int, int>> &res)
{
    vector<int> sorted(arr);
    sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; i++)
    {
        int check = sorted[n - i - 1];

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] == check)
            {
                arr.erase(arr.begin() + j);
                for (int k = j + 1; k < n - i; k++)
                {
                    res.push_back({x, k});
                }
                break;
            }
        }
    }
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
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (auto &x : arr1)
            cin >> x;
        for (auto &x : arr2)
            cin >> x;
        vector<pair<int, int>> res;
        swap_pos(1, n, arr1, res);
        swap_pos(2, n, arr2, res);

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
            {
                res.push_back({3, i + 1});
            }
        }

        cout << res.size() << endl;
        for (auto val : res)
            cout << val.first << " " << val.second << endl;
    }
    return 0;
}
