#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k; cin >> n >> k;
    long long mid = (n % 2) ? (n / 2) + 1 : n / 2;
    if(k <= mid) cout << 2 * k - 1;
    else cout << (k - mid) * 2;
    return 0;
}

