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
        vector<int> arr1(n),arr2(n);
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }

        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        unordered_set<int> alter1,alter2;
        int res = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if(i % 2 == 1){
                if(arr1[i] == arr2[i]) {
                    res = i + 1;
                    break;
                }
                if(alter1.count(arr2[i]) || alter2.count(arr1[i])) {
                    res = i + 1;
                    break;
                }
                if(i != n -1) alter1.insert(arr1[i + 1]);
                if(i != n - 1)alter2.insert(arr2[i + 1]);
                if(alter1.count(arr1[i]) || alter2.count(arr2[i])) {
                    res = i + 1;
                    break;
                }

            } else{
                if(arr1[i] == arr2[i]) {
                    res = i + 1;
                    break;
                }
                if(alter1.count(arr1[i]) || alter2.count(arr2[i])) {
                    res = i + 1;
                    break;
                }
                if(i != n - 1) alter1.insert(arr2[i + 1]);
                if(i != n - 1) alter2.insert(arr1[i + 1]);
                if(alter1.count(arr2[i]) || alter2.count(arr1[i])) {
                    res = i + 1;
                    break;
                }
            } 
        }
        cout << res << endl;
    }
    return 0;

}

