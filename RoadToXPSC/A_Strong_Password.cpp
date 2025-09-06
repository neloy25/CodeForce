#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool done = false;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                char tmp;
                if (s[i] == 'a') tmp = 'b';
                else tmp = 'a';
                s.insert(i, 1, tmp);
                done = true;
                break;
            }
        }

        if (!done) {
            if (s.back() == 'a') s.push_back('b');
            else s.push_back('a');
        }

        cout << s << endl;
    }
    return 0;
}
