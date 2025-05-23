#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n,m,l,r;
        scanf("%d%d%d%d", &n,&m,&l,&r);
        if(l * (- 1) >= m) printf("%d 0\n", (-1) * m);
        else printf("%d %d\n", l,l + m);
    }
    return 0;
}