#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; i++) {
        long long int a; 
        scanf("%lld", &a);
        int count = 0;
        while (a % 2 == 0 && a > 0) {
            a = a / 2;
            count++;
        }
        if(count > max) max = count;
    }
    printf("%d ",max);
    return 0;
}