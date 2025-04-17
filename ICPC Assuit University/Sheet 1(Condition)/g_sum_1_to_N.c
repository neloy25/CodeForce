#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int sum = ((long long)n * (n + 1)) / 2LL;
    printf("%lld", sum);
    return 0;
}