#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int i = 1;
        while(n % i == 0) {
            i++;
        }
        cout << i - 1 << endl;
    }
    return 0;

}

