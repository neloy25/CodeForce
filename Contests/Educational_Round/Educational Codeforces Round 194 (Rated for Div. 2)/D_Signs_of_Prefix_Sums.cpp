#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;

    if (s[0] == '0')
    {
        cout << -1 nl;
        return;
    }
    for(int i = 0;i+1<n;i++)
    {
        if(s[i]=='0' and s[i+1]=='0')
        {
            cout<<-1 nl;
            return;
        }
    }
    for (int i=0; i<n-3; i++)
    {
        string sub=s.substr(i, 4);
        if (sub=="+--+" or sub=="-++-")
        {
            cout << 3 nl;
            return;
        }
    }
    int psum = 0,ck=1;
    for(int i = 0;i<n;i++)
    {
        if(s[i]=='0')
        {
            if(abs(psum)!=1)
            {
                ck=0;
            }
            psum=0;
        }
        if(s[i]=='+')
        {
            if(psum<0)ck=0;
            if(psum<=1)psum++;
            else psum--;
        }
        if(s[i]=='-')
        {
            if(psum>0)ck=0;
            if(psum>=-1)psum--;
            else psum++;
        }
    }
    cout<<(ck?1:2) nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}