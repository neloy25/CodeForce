#include<stdio.h>

void pt(int n){
    for (int i = 1; i < n; i++) {
        printf("%d ",i);
    }
    printf("%d",n);
}

int main() {
    int n;
    scanf("%d", &n);
    pt(n);
    return 0;
}