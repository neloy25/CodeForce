#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,p;
    cin >> n >> p;

    long long a[n],b[n];
    vector<pair<long long,long long>> v;
    for(int i = 0; i < n ;i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n ;i++) {
        cin >> b[i];
        if(b[i] < p) {
            v.push_back({b[i],a[i]});
        }
    }

    sort(v.begin(),v.end());

    long long res = p;
    n--;
    for(int i = 0; i < v.size(); i++) {
        if(v[i].second < n) {
            res+= v[i].first * v[i].second;
            n-= v[i].second;
        } else {
            res+= v[i].first * n;
            n = 0;
        }
    }

    if(n != 0) res+= p * n;
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

