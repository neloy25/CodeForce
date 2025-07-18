#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int fib[10] = {1,2,3,5,8,13,21,34,55,89};
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int arr[3];
            cin >> arr[0] >> arr[1] >> arr[2];
            sort(arr,arr+3);
            if(fib[n - 1] > arr[0] || (fib[n - 1] + fib[n - 2]) > arr[2]){
                cout << 0;
            }else{
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;

}

