#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'


int digit(int n) {
    int sum = 0;
    while(n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
void solve() {
    int x;
    cin >> x;

    int res = 0;
    for(int y = x; y<= x + 81; y++) {
        if(y - x == digit(y)) res++;
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