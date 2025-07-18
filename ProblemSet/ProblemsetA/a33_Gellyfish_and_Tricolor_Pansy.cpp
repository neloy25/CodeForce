#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(c >= d){
            if(a < b && a < d){
                cout << "Flower" << endl;
            } else{
                cout << "Gellyfish" << endl;
            }
        } else{
            if(b <= a && b <= c){
                cout << "Gellyfish" << endl;
            } else{
                cout << "Flower" << endl;
            }
        }
    }
    return 0;

}

