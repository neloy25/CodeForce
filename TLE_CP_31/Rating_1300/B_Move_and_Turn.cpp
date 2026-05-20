#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    if(n & 1) {
        cout << ((n / 2) + 2) * ((n /2) + 1) * 2;
    } else {
        cout << (n / 2 + 1) * ((n /2) + 1);
    }
}