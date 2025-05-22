#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n,m,p,q;
        scanf("%d %d %d %d", &n,&m,&p,&q);
        if(n % p == 0 && m != (n / p) * q){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
    }
    return 0;
}