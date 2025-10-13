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
        int v[n];
        int feq[105]={0};
        for(int i = 0; i < n;i++) {
            cin >> v[i];
            feq[v[i]]++;
        }

        for(int i = 0; i< 105; i++) {
            if(feq[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

