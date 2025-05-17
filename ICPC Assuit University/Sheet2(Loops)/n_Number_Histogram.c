#include<stdio.h>

int main(){
    char ch;
    scanf(" %c",&ch);
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        for(int j = 0; j < n;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}