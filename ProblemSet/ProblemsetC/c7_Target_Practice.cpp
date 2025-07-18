#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if(i == 0 || j == 0 || j == 9 || i == 9) cout << 1;
                else if(i == 1 || j == 1 || j == 8 || i == 8) cout << 2;
                else if(i == 2 || j == 2 || j == 7 || i == 7) cout << 3;
                else if(i == 3 || j == 3 || j == 6 || i == 6) cout << 4;
                else cout << 5;
            }
        cout << endl;  
        }
    return 0;

}



