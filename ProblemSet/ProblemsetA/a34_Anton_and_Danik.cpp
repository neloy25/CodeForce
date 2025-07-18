#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;

    int danik = 0;
    for(char val: s){
        if(val == 'D') danik++;
    }

    if(danik == (n - danik)) cout << "Friendship";
    else if(danik > (n - danik)) cout << "Danik";
    else cout << "Anton";
    return 0;

}

