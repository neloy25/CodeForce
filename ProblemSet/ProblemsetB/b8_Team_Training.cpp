#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());


        int count = 0,val = 0, rem = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i] >= k){
                count++;
            } else{
                rem++;
                if(arr[i] * rem >= k){
                    rem=0;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
