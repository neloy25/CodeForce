#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;

    while(t--) {
        int l, a, b;
        cin >> l >> a >> b;

        set<int> s;

        while(!s.count(a)) {
            s.insert(a);
            a+=b;
            a = a % l;
        }

        cout << *s.rbegin() << endl;
    }
}