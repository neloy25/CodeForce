#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int even = 0;
    int pos = 0;
    int neg = 0;
    for(int i = 0; i < t; i++){
        int a;
        scanf("%d",&a);
        if(a % 2 == 0) even++;
        if(a > 0) pos++;
        if(a < 0) neg++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,t - even,pos,neg);
    return 0;
}