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
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector <long long> prefix(n);
        vector <long long> prefix_max(n);
        prefix_max[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[n - i];
            if(arr[i] > prefix_max[i - 1]) prefix_max[i] = arr[i];
            else prefix_max[i] = prefix_max[i - 1];
        }


        for (int i = 0; i < n; i++)
        {
            cout << prefix_max[n - i - 1] + prefix[i]<< " ";
        }
        
        cout << endl;
    }
    return 0;

}

