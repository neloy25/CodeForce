#include<bits/stdc++.h>
using namespace std;

int divisor_count(long long n) {
    int cnt = 0;
    for(int i = 1; i <= sqrt(n);i++) {
        if(n % i == 0) {
            if(i == n / i) cnt += 1;
            else cnt += 2;
        } 
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long b;
    cin >> b;

    int res = divisor_count(b);
    cout << res;

    return 0;

}

