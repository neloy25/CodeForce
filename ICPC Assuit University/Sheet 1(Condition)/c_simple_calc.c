#include<stdio.h>

int main(){
    int x;
    long long int y;
    scanf("%d%lld",&x,&y);
    printf("%d + %lld = %d\n", x, y, x + y);
    printf("%d * %lld = %lld\n", x, y, x * y);
    printf("%d - %lld = %d\n", x, y, x - y);
    return 0;
}