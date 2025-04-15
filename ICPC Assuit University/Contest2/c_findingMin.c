#include<stdio.h>
#include<limits.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int min = INT_MAX;
    int rem = n % k;
    for(int i = 1; i <= n - rem; i++){
        int a;
        scanf("%d",&a);
        if(a < min) min = a;
        if(i % k == 0){
            printf("%d ",min);
            min = INT_MAX;
        }
    }
    if(rem != 0){
        while(rem--){
            int a;
            scanf("%d",&a);
            if(a < min) min = a;
        }
        printf("%d",min);
    }
    return 0;
}