#include<bits/stdc++.h>
using namespace std;

void repeat_count(vector<int>& arr, const string& s) {
    char temp = s[0];
    int rep = 0;

    for (char c : s) {
        if (c != temp) {
            arr.push_back(rep);
            rep = 0;
            temp = c;
        }
        rep++;
    }

    arr.push_back(rep);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        string bell;
        string sound;
        cin >> bell;
        cin >> sound;

        if(bell[0] != sound[0]) {
            cout << "NO" << endl;
            continue;
        }
        vector <int> rep_bell;
        vector <int> rep_sound;
        repeat_count(rep_bell,bell);
        repeat_count(rep_sound,sound);

        if(rep_bell.size() != rep_sound.size()) {
            cout << "NO" << endl;
            continue;
        }

        int flag = 1;
        for (int i = 0; i < rep_bell.size(); i++)
        {
            if(rep_sound[i] < rep_bell[i] || rep_sound[i] > 2 * rep_bell[i]){
                flag = 0;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}

