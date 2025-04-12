// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int rev = 0 , copy = n;

    while(n != 0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(copy == rev) printf("%d\nYES",rev);
    else printf("%d\nNO",rev);
}