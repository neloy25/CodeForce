#include<stdio.h>

void print_recursion(int i,int n){
    if(i == n) return;
    printf("I love Recursion\n");
    print_recursion(i+1,n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_recursion(0,n);
    return 0;
}