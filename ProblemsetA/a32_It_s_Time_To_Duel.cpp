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

        if((arr[0] == 0 && arr[1] == 0) || (arr[n - 1] == 0 && arr[n - 2] == 0)){
            cout << "YES" << endl;
            continue;
        }

        int found = 0;
        int one_count = 0;
        for(int i = 1; i < n - 1;i++){
            if(arr[i] == 0){
                if(arr[i - 1] == 0 || arr[i + 1] == 0){
                    found = 1;
                    break;
                }
            } else{
                one_count++;
            }
        }
        one_count+=(arr[0] + arr[n - 1]);
        if(found || one_count == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

