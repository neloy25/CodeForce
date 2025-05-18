#include<stdio.h>

int fibonacci(int n){
    if(n <= 2) return n - 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    int fib = fibonacci(n);
    printf("%d", fib);
    return 0;
}