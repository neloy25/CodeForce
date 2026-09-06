#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<pair<int,int>> v(n);
    map<ll,ll> feq;
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        feq[v[i].first]++;
        v[i].second = i;
    }

    int a = 0, b = 0, c = 0;
    bool B = false, C = false;
    for(int i = 0; i < n; i++) {
        if(feq[i] >= 3) {
            if(!C) {
                c = i + 1;
                b = i + 1;
                a = i + 1;
            }
            else if(!B) {
               b = i + 1;
               a = i + 1; 
            }
        }
        else if(feq[i] == 2) {
            if(!C) {
                b = i + 1;
                a = i + 1;
            } else if(!B) {
                b = i + 1;
                a = i + 1;
            }
            C = true;
        }
        else if(feq[i] == 1) {
            if(!C && !B) {
                a= i + 1;
            } 
            B = true;
            C = true;
        } else {
            break;
        }
        if(B & C) break;
    }
    if(a + b + c < 2 * a) {
        no;
        return;
    }
    yes;
    sort(v.begin(), v.end());
    int ma = 0, mb = 0, mc = 0;
    string res(n,'C');
    for(int i = 0; i < n; i++) {
        if(v[i].first == ma && ma < a) {
            ma++;
            res[v[i].second] = 'A';
        } else if(v[i].first == mb && mb < b) {
            mb++;
            res[v[i].second] = 'B';
        }
    }
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}