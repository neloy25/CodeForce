#include<stdio.h>

int main(){
    while (1)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a <= 0 || b <= 0) break;
        int sum = 0;
        if(a > b){
            int temp = b;
            b = a;
            a = temp;
        }
        for(int i = a; i <= b;i++){
            printf("%d ",i);
            sum += i;
        }
        printf("sum =%d\n",sum);
    }
    
    return 0;
}