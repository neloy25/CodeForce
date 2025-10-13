#include<bits/stdc++.h>
using namespace std;

string bn(int n) {
    string a;
    while(n) {
        if(n & 1) a+='1';
        else a+='0';
        n>>=1;
    }

    int i = 0;
    while(a[i] == '0') {
        a+='0';
        i++;
    }
    return a;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 0) {
            cout << "YES\n";
            continue;
        }

        string a = bn(n);

        int len = a.size();
        if(len & 1 && a[len >> 1] == '1') {
            cout << "NO\n";
            continue;
        }

        bool flag = true;
        int l = 0, r = len - 1;
        while(l <= r) {
            if(a[l]!= a[r]) {
                flag = false;
                cout << "NO\n";
                break;
            }
            l++;
            r--;
        }
        if(flag) cout << "YES\n";
    }
    return 0;
}

