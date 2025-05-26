#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int feq[26]={0};
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        feq[str[i] - 'a']++;

    }
      for(int i=0;i<26;i++)
    {
        if(feq[i]!=0){
            count++;
        }
    }
    (count%2) ? cout<<"IGNORE HIM!" : cout<<"CHAT WITH HER!";
    return 0;
 }