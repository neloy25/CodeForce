#include<stdio.h>

void pyramid(int n,int i,int star,int space){
    for (int j = 1; j <= space; j++) {
        printf(" ");
    }
    for (int j = 1;j <= star; j++) {
        printf("*");
    }
    if(i == n) return;
    printf("\n");
    star+=2;
    space--;
    pyramid(n,i+1,star,space);
}




int main() {
    int n;
    scanf("%d", &n);
    pyramid(n,1,1,n -1);
    return 0;
}