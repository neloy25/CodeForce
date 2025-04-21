#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int remainder = x % y;
    while(remainder > 0){
        x = y;
        y = remainder;
        remainder = x % y;
    }
    printf("%d",y);
    return 0;
}