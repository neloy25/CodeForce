#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    string str;
    cin>>x>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}