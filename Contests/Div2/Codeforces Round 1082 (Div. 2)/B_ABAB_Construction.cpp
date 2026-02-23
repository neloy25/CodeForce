#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    string s;
    cin >> n >> s;

    char f = 'a', l = 'b';
    if(n & 1) l = 'a';

    bool both = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            if(both) {
                f = 'a'; l = 'b';
                both = false;
            }
            else if(f == 'a' && l == 'a') l = 'b';
            else if(f == 'a') f = 'b';
            else if(l == 'a') l = 'b';
            else {
                no;
                return;
            }
        } else if(s[i] == 'b') {
            if(both) {
                f = 'a'; l = 'b';
                both = false;
            }
            else if(f == 'b' && l == 'b') l = 'a';
            else if(f == 'b') f = 'a';
            else if(l == 'b') l = 'a';
            else {
                no;
                return;
            }
        } else {
            if(both) {
                f = 'a';
                l = 'b';
                both = false;
            }
            else if(f != l) {
                both = true;
            } 
            else if(f == 'a') l = 'b';
            else l = 'a';
        }
    }
    yes;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}