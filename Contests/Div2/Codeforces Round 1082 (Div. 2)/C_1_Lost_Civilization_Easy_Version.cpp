#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    deque<ll> q;
    ll res = 0;
    for(int i = n -1; i > 0; i--) {
        while(!q.empty() && q.front() == v[i] + 1) {
            q.pop_front();
            res++;
        }

        if(v[i] == v[i - 1] + 1) {
            res++;
        } else {
            q.push_front(v[i]);
        }
    }

    while(!q.empty() && q.front() == v[0] + 1) {
        q.pop_front();
        res++;
    }
    cout << n - res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}