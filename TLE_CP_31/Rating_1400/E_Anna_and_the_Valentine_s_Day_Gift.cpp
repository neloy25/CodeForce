#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "Sasha\n"
#define no cout << "Anna\n"

ll digit(ll n) {
    string s = to_string(n);
    return (ll)s.size();
}

ll zero(ll n) {
    string s = to_string(n);
    ll cnt = 0;
    int r = s.size() - 1;
    while(s[r] == '0') {
        r--;
        cnt++;
    }
    return cnt;
}

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> v(n), zeros;
    ll total = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        total+= digit(v[i]);
        zeros.push_back(zero(v[i]));
    }
    sort(zeros.begin(), zeros.end(), greater<int>());
    for(int i = 0; i < zeros.size(); i++) {
        if(i % 2 == 0) {
            total -= zeros[i];
        }
    }
    if(total > m) {
        yes;
    } else {
        no;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}