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
        vector <int> arr1(n);
        vector <int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        vector <int> feq1(n + 1,-1);
        vector <int> feq2(n + 1,-1);
        vector <int> first(n + 1,-1);

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            if(feq1[arr1[i]] == -1 && feq2[arr1[i]] == -1){
                first[arr1[i]] = i;
            }
            if(feq1[arr2[i]] == -1 && feq2[arr2[i]] == -1){
                first[arr2[i]] = i;
            }
            feq1[arr1[i]] = i;
            feq2[arr2[i]] = i;
            if(arr1[i] == arr2[i]) mx = i + 1;
            else if(i != n - 1){
                if(arr1[i] == arr1[i + 1] || arr2[i] == arr2[i + 1]) mx = i + 1;
            }
        }
        
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << feq1[i] << " ";
        // }
        
        // cout << "\n";
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << feq2[i] << " ";
        // }
        // cout << "\n";
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << first[i] << " ";
        // }
        // cout << "\n";
        
        for (int i = 1; i <= n; i++)
        {
            if(feq1[i] == -1 || feq2[i] == -1) continue;
            if(feq1[i] - first[i] < 2 && feq2[i] - first[i] < 2) continue;
            mx = max(first[i] + 1,mx);
        }

        cout << mx << endl;
    }

    return 0;

}

