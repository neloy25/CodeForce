#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int st = 0;
    printf("%d ",st);
    if(n == 1) return 0;
    int end = 1;
    printf("%d ",end);
    if(n == 2) return 0;
    int sum = st + end;

    for(int i = 2; i < n; i++){
        printf("%d ",sum);
        st = end;
        end = sum;
        sum = st + end;
    }
    return 0;
}