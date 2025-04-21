#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int spc = n - i; spc > 0; spc--){
            printf(" ");
        }
        printf("*");
        for(int j = 1; j < i;j++){
            printf("**");
        }
        printf("\n");
    }
    return 0;
}