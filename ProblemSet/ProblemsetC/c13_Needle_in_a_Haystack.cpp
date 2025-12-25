#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    string s,t;
    cin >> s;
    cin >> t;

    int feqS[26] = {0};
    int feqT[26] = {0};

    for(int i = 0; i < s.size();i++) {
        feqS[s[i] - 'a']++;
    }

    for(int i = 0; i < t.size();i++) {
        feqT[t[i] - 'a']++;
    }


    for(int i = 0; i < 26; i++) {
        if(feqS[i] > feqT[i]) {
            cout << "Impossible\n";
            return;
        }

        // if(feqT[i] != 0 && feqS[i] != 0) {
        //     cout << char(i + 'a') << " " << feqS[i] << " " << feqT[i] << endl;
        // }
        feqT[i] -=feqS[i];
    }

    // for(int i = 0; i < 26; i++) {
    //     cout << feqT[i] << " "; 
    // }

    string res="";
    for(int i = 0; i < s.size();i++) {
        int end = s[i] - 'a';
        for(int i = 0; i < end; i++) {
            while(feqT[i] != 0) {
                char c = 'a' + i;
                res.push_back(c);
                feqT[i]--;
            }
        }
        res.push_back(s[i]);
    }

    for(int i = 0; i < 26; i++) {
        char c = 'a' + i;
        while(feqT[i]) {
            res.push_back(c);
            feqT[i]--;
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

