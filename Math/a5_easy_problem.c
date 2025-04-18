#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int count = 0;
        for (int a = 1; a < n; a++) {
            int b = n - a;
            if(b > 0 && b < n) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}