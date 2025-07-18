#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int len = sqrt(n);
    for(int i = 2; i <= len; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x , k;
        cin >> x >> k;
        if(k == 2 && x == 1) cout << "YES";
        else if(k > 1 || x == 1){
            cout << "NO";
        }else{
            cout << (is_prime(x) ? "YES" : "NO");
        }

        cout << endl;
    }
    return 0;

}

