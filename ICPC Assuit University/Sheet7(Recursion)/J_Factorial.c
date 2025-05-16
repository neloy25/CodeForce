#include<stdio.h>

int log(long long int n){
    if(n < 2) return 0;
    int count = log(n/2);
    return count + 1;
}

int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%d", log(n));
    return 0;
}