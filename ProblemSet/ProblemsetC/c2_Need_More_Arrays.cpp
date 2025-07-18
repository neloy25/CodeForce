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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 1, temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > temp + 1){
                count++;
                temp = arr[i];
            }
        }
        
        cout << count << endl;
    }

    return 0;

}
