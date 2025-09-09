#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b){
            if((a&1) && a==b+1)cout<<y<<"\n";
            else cout<<"-1\n";
            return;
        }
        if(a==b){
            cout<<"0\n";
            return;
        }
        if(y>x)y=x;
        int ans=0;
        if(a&1)a++, ans+=x;
        if(b&1)b--, ans+=y;
        ans+=(b-a)/2 *(x+y);
        cout<<ans<<"\n";
    }
    return 0;
}
