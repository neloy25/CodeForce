#include<stdio.h>
#include<limits.h>

int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < 3; i++){
        int a;
        scanf("%d",&a);
        if(a > max) max = a;
        if(a < min) min = a;
    } 
    printf("%d %d",min, max);
}