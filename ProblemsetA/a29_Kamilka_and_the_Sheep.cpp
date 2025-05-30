#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sorted(arr,n);
        int res = arr[0] - arr[n - 1];
        cout << res << endl;
    }
    return 0;
}