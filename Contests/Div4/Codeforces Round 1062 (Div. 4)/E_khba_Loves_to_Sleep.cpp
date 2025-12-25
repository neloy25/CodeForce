#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool findD(ll d,vector<ll> &a,ll x, ll k) {
    if (d == 0) return (x + 1) >= k; 
    vector<pair<ll,ll>> interval;

    ll range = d - 1;
    for(ll val : a) {
        ll l = max(0LL,val - range);
        ll r = min(x,val+range);
        interval.push_back({l,r});
    }

    if (interval.empty()) return (x + 1) >= k;
    sort(interval.begin(),interval.end());

    ll forb = 0;
    ll l = interval[0].first, r = interval[0].second;
    for (ll i = 1; i < interval.size(); ++i) {
        if (interval[i].first <= r + 1) {
            r = max(r, interval[i].second);
        } else {
            forb += (r - l + 1);
            l = interval[i].first; r = interval[i].second;
        }
    }
    forb += (r - l + 1);
    ll avail = x + 1 - forb;
    return avail >= k;
}

vector<ll> pos(ll d,vector<ll> &a,ll x, ll k) {
    vector<ll> res;
    if (d == 0) {
        for (ll p = 0; p < k; ++p) res.push_back(p);
        return res;
    }

    vector<pair<ll,ll>> interval;
    ll range = d - 1;
    for(ll val : a) {
        ll l = max(0LL,val - range);
        ll r = min(x,val+range);
        interval.push_back({l,r});
    }

    sort(interval.begin(),interval.end());

    vector<pair<ll,ll>> merged;
    for (auto &s : interval) {
        if (merged.empty() || s.first > merged.back().second + 1) merged.push_back(s);
        else merged.back().second = max(merged.back().second, s.second);
    }

    ll prev = 0;
    for (auto &m : merged) {
        ll l = m.first, r = m.second;
        if (prev <= l - 1) {
            ll start = prev, end = l - 1;
            for (ll p = start; p <= end && res.size() < k; ++p) res.push_back(p);
            if (res.size() >= k) return res;
        }
        prev = r + 1;
        if (prev > x) break;
    }
    if (prev <= x) {
        for (ll p = prev; p <= x && res.size() < k; ++p) res.push_back(p);
    }
    return res;
}

void solve() {
    int n,k,x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll lo = 0, hi = x + 2;
    while (lo + 1 < hi) {
        ll mid = lo + (hi - lo) / 2;
        if (findD(mid, a, x, k)) lo = mid;
        else hi = mid;
    }
    ll d = lo;

    vector<ll> res = pos(d,a,x,k);

    set<int> ans;

    for(int val : res) ans.insert(val);
    for(int val : ans) cout << val << " ";
    cout << endl;
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

