#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = 0;

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d",&x);
        if(x > max) max = x;
    }
    printf("%d",max);
    return 0;
}