#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n,x;
        scanf("%d%d", &n,&x);
        for (int i = 0; i < n; i++) {
            if(i == x) continue;
            printf("%d ", i);
        }
        if(n != x) printf("%d",x);
        printf("\n");
    }
    return 0;
}