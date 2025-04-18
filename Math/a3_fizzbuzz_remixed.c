#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int res = (n / 15) * 3;
        int mod = (n % 15) + 1;
        if(mod <= 3) res+= mod;
        else res+=3;
        printf("%d\n", res);
    }
    return 0;
}