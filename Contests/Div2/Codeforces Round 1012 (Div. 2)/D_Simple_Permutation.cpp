#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 7;

bool isPrime[maxN];

void solve() {
    int n;
    cin >> n;

    if(n <= 5) {
        for(int i = 0; i < n; i++) {
            cout << i + 1 << " ";
        }
        cout nl;
        return;
    }
    int val = -1;
    for(int i = (n / 2); i >= 0; i--) {
        if(isPrime[i]) {
            val = i;
            break;
        }
    }

    vector<int> res;
    int l = 1, r = 2 * val - 1;
    while(l < r) {
        res.push_back(l);
        res.push_back(r);
        l++;
        r--;
    }
    res.push_back(val);

    for(int i = 2 * val; i <= n; i++) {
        res.push_back(i);
    }
    for(int a : res) {
        cout << a << " ";
    }
    cout nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    memset(isPrime, true, sizeof(isPrime));
    for(int i = 2; i < maxN; i++) {
        if(isPrime[i]) {
            for(int j = i + i; j < maxN; j+=i) {
                isPrime[j] = false;
            }
        }
    }


    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}