#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int num;

    if(n % 2) {
        num = (n - 1) / 2;
        cout << num << endl;
        for(int i = 1; i <= num; i++){
            if(i == num) {
                cout << 3;
                continue;
            }
            cout << 2 << " ";
        }
    }
    else {
        num = n / 2;
        cout << num << endl;
        for(int i = 1; i <= num; i++){
            cout << 2 << " ";
        }
    }
    return 0;

}

