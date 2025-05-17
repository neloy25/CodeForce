#include<stdio.h>

int main() {
    long long int n,m;
    scanf("%lld%lld", &n,&m);
    int res = n % 10 + m % 10;
    printf("%d", res);
    return 0;
}