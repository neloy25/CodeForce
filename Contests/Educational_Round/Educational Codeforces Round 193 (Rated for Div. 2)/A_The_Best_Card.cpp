#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = 1e6 + 9;

vector<int> primes;
bool is_prime[N]; 

void sieve_v0() {
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
}

void solve() {
    int n;
    cin >> n;
    if(is_prime[n + 1]) yes;
    else no;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve_v0();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}