#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t;i++){
        int n;
        scanf("%d",&n);
        if(n == 0) printf("%d",0);
        while(n > 0){
            int rem = n % 10;
            n = n / 10;
            printf("%d ",rem);
        }
        printf("\n");
    }
    return 0;
}