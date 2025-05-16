#include<stdio.h>

void print_1_to_n(int i,int n){
    if(i == n + 1) return;
    printf("%d\n",i);
    print_1_to_n(i+1,n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_1_to_n(1,n);
    return 0;
}