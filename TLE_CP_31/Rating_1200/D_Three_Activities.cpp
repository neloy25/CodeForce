#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'


void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v[3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) {
            int val;
            cin >> val;
            v[i].push_back({val,j});
        }
    }

    vector<array<int,3>> trip;
    for(int i = 0; i < 3; i++) {
        sort(v[i].begin(), v[i].end(), greater<pair<int,int>>());
        for(int j = 0; j < 3; j++) {
            trip.push_back({v[i][j].first, i, v[i][j].second});
        }
    }
    sort(trip.begin(), trip.end(), greater<array<int,3>>());
    int ans = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(trip[j][1] != trip[i][1] && trip[j][2] != trip[i][2]) {
                for(int k = j + 1; k < 9; k++) {
                    if(trip[k][1] != trip[i][1] && trip[k][2] != trip[i][2] && trip[k][1] != trip[j][1] && trip[k][2] != trip[j][2]) {
                        ans = max(ans, trip[i][0] + trip[j][0] + trip[k][0]);
                    }
                }
            }
        }
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}