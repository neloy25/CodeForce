#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int count = 1;
    while(x <= y){
        x = x * 3;
        y = y * 2;
        count++;
    }
    cout << count - 1;
    return 0;
}