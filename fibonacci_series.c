#include<stdio.h>

int main(){
    int count = 0;
        int n;
        scanf("%d",&n);
        int st = 0;
        printf("%d ",st);
        int end = 1;
        printf("+ %d ",end);
        int sum = st + end;

        while(sum <= n){
            printf("+ %d ",sum);
            st = end;
            end = sum;
            sum = st + end;
        }
        return 0;
}