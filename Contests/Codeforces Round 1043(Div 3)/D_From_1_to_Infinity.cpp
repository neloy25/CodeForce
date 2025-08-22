#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> sum(16,0);

int sumFirstDigits(long long n, int m) {
    string s = to_string(n);
    int sum = 0;
    for(int i = 0; i < m && i < s.size(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

long long pow10(int p) {
    long long res = 1;
    while (p--) res *= 10;
    return res;
}

int msd(ll n) {
    if (n < 10) return n;
    return msd(n / 10);
}

int digits(ll n) {
    if (n < 10) return 1;
    return 1 + digits(n / 10);
}

ll summed(ll n) {
    if(n < 10) return n * (n + 1) / 2;

    int m = msd(n);
    int p = digits(n) - 1;
    ll pow10p = pow10(p);
    ll rem = n % pow10p;

    return m * sum[p] + ((m * (m - 1)) / 2) * pow10p + m * (rem + 1) + summed(rem);
}

ll totaldigit(ll n) {
    int d = digits(n);
    ll res = 0;
    ll tmp = 1;
    for(int i = 1; i < d; i++) {
        res += (i * tmp);
        tmp *= 10;
    }

    res*= 9;
    res+= ((n - tmp + 1) * d);
    return res;
}

ll findx(ll k) {
    ll l = 1, r = k;
    ll x = 0;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(totaldigit(mid) <= k) {
            x = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return x;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sum[0] = 0;
    sum[1] = 45;
    ll tmp = 10;
    for(int i = 2;i < 16;i++) {
        sum[i] = sum[i - 1] * 10 + 45 * tmp;
        tmp *= 10;
    }
    int t;
    cin >> t;
    while(t--){
        ll k;
        cin >> k;
        
        ll x = findx(k);
        ll total = totaldigit(x);
        ll res = summed(x);
        ll remaining_sum = sumFirstDigits(x + 1,k - total);
        cout << res + remaining_sum << endl;
    }
    return 0;
}

