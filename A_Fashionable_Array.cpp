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
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        sort(arr,arr+n);

        if((arr[0] + arr[n - 1]) % 2 == 0){
            cout << 0 << endl;
            continue;
        }

        int test1 = arr[0] % 2;
        int parity1 = 1;
        int parity2 = 1;

        for(int i = 1; i < n; i++){
            if(arr[i] % 2 != test1){
                break;
            }
            parity1++;
        }

        for(int i = n - 2; i >= 0; i--){
            if(arr[i] % 2 == test1){
                break;
            }
            parity2++;
        }
        cout << min(parity1,parity2) << endl;
    }

    return 0;

}
