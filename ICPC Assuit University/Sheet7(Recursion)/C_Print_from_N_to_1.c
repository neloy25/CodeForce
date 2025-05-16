#include<stdio.h>

void print_n_to_1(int i,int n){
    if(i == 1){
        printf("%d",i);
        return;
    }
    printf("%d ",i);
    print_n_to_1(i-1,n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_n_to_1(n,n);
    return 0;
}