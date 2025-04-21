#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        int count = 0;
        while(n > 0){
            if(n % 2 == 1) count++;
            n = n/2;
        }
        int res1 = pow(2,count) - 1;
        printf("%d\n",res1);
    }
    return 0;
}