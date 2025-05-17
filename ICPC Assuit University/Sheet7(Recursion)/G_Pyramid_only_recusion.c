#include<stdio.h>

void print_star(int start,int end){
    printf("*");
    if(start >= end) return;
    return print_star(start+1,end);
}

void print_space(int start,int end){
    if(start == end) return;
    printf(" ");
    return print_space(start+1,end);
}

void pyramid(int n,int i,int star,int space){
    print_space(0,space);
    print_star(1,star);
    printf("\n");
    if(i == n) return;
    star+=2;
    space-=1;
    pyramid(n,i+1,star,space);
}




int main() {
    int n;
    scanf("%d", &n);
    pyramid(n,1,1,n -1);
    return 0;
}