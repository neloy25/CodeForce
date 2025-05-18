#include<stdio.h>

int sequence(int n,int i){
    if(n == 1) return 1;
    if(n % 2 == 0) i = sequence(n / 2,i);
    else i = sequence(3 * n + 1,i);
    return i + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sequence(n,1));
    return 0;
}