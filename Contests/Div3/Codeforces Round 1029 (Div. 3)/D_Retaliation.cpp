#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int div = 2 * arr[0] - arr[1];
        if(div < 0 || div % (n + 1) != 0){
            cout << "NO" << endl;
            continue;
        }

        int x = div / (n + 1);
        int y = arr[0] - n * x;
        if(x < 0 || y < 0) {
            cout << "NO" << endl;
            continue;
        }
        
        int found = 1;
        for (int i = 2; i < n; i++)
        {
            if(arr[i] != ((n - i) * x + (i + 1) * y)){
                found = 0;
                break;
            }
        }
        
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

