#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        iota(v.begin(),v.end(),1);
        for(int val : v) cout << val << " ";
        cout << endl;
    }
}