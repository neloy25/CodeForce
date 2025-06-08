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
            
        set <int> new_arr;
        set <int> check;
        int count = 0;
        for(int i : arr){
            new_arr.insert(i);
            check.erase(i);
            if(check.empty()){
                check = new_arr;
                new_arr.clear();
                count++;
            }  
        }
        cout << count << endl;
    }
    return 0;

}

