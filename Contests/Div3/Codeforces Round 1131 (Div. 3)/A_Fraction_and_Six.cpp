#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    map<char,int> fq1, fq2;
    for(auto c : s) {
        fq1[c]++;
    }

    for(auto c : t) {
        fq2[c]++;
    }

    for(auto [key, val]: fq2) {
        fq1[key]-= val;
    }

    for(auto [key, val] : fq1) {
        if(key == 's' || key == 'i' || key == 'x') {
            if(val != 1) {
                no;
                return;
            }
        } else {
            if(val != 0) {
                no;
                return;
            }
        }
    }
    if(fq1['s'] != 1 || fq1['i'] != 1 || fq1['x']!= 1) {
        no;
        return;
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