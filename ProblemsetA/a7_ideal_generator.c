#include<stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int n;
        scanf("%d", &n);
        if(n % 2 != 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}