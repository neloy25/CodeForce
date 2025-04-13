#include<stdio.h>

int main(){
    int a,c;
    long long int b,d;
    scanf("%d%lld%d%lld",&a,&b,&c,&d);
    long long int x = (a * b) - (c * d);
    printf("Difference = %lld",x);
    return 0;
}