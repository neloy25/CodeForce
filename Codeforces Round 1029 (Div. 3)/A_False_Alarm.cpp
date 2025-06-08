#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector <int> arr(n);
        int first_index,last_index;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) last_index = i;
        }


        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1){
                first_index = i;
                break;
            }
        }
        
        cout << ((x > last_index - first_index) ? "YES\n" : "NO\n");
    }
    return 0;

}

