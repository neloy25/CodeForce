#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int copy = n;
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            sum += (copy - i);
            copy--;
        }

        printf("%d\n", sum + 1);
    }
    return 0;
}