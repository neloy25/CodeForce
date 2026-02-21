#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;

    string s; 
    cin >> s;

    int dupli = 0;
    char prev = '*';
    for(int i = 0; i < n;i++) {
        if(s[i] != prev) {
            dupli++;
            prev = s[i];
        }
    }

    if(dupli != n && s[0] != s[n - 1]) dupli++;
    cout << dupli nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}