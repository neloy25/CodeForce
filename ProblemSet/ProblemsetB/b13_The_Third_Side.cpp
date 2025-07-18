#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
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
        
        int sum = accumulate(arr.begin(),arr.end(),0);
        cout << sum - n + 1 << endl;
    }

    return 0;
}