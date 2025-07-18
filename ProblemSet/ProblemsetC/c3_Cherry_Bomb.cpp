#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector <int> a(n);
        vector <int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int temp = -1;
        int lost_count = 0;
        for(int i = 0; i < n; i++){
            if(b[i] != -1){
                lost_count++;
                int sum = a[i] + b[i];
                if(temp != -1 && sum != temp){
                    cout << 0 << endl;
                    temp = -2;
                    break;
                }
                temp = sum;
            }
        }
        if(temp == -2) continue;
        int mn = *max_element(a.begin(), a.end());
        int mx = *min_element(a.begin(), a.end());
        mx += k;

        if(temp == -1){
            cout << mx - mn + 1 << endl;
        } else if((temp < mn || temp > mx)) {
            cout << 0 << endl;
        } else{
            cout << 1 << endl;
        }
    }
    return 0;

}

