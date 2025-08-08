#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    queue<int> q;
    q.push(4);
    q.push(7);

    while(!q.empty()) {
        int f = q.front();
        q.pop();
        int a = f * 10 + 7;
        int b = f * 10 + 4;
        if(a <= 1000) q.push(a);
        if(b <= 1000) q.push(b);
        if(n % f == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;

}

