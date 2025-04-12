// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 0; i <t; i++){
        int a;
        scanf("%d",&a);
        long long int fact = 1;

        for(int j = 1; j <= a; j++){
            fact *= j;
        }
        printf("%lld\n",fact);
    }
}