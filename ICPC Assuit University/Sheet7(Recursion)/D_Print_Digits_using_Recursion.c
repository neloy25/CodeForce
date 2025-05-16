#include<stdio.h>

void print_digit(int n){
    int rem = n % 10;
    if(n < 1) return;
    print_digit(n / 10);
    printf("%d ", rem); 
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if(n == 0){
            printf("0\n");
            continue;
        }
        print_digit(n);
        printf("\n");
    }
    return 0;
}