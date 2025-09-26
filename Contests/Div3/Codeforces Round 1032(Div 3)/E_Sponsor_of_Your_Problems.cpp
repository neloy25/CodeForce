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
        string s1, s2;
        cin >> s1 >> s2;
        int res = 0;
        int i;
        for (i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
                res += 2;
            else if (s2[i] - '1' == s1[i] - '0')
            {
                res += 1;
                break;
            }
            else
            {
                i = s1.size();
                break;
            }
        }
        i++;
        for (i; i < s1.size(); i++)
        {
            if (s1[i] == '9' && s2[i] == '0')
                res++;
            else
                break;
        }

        cout << res << endl;
    }
    return 0;
}
