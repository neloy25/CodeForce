#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        if(b >= a) {
            if(b % 2 == n % 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else{
            if(b % 2 == n % 2 && a % 2 == b % 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

