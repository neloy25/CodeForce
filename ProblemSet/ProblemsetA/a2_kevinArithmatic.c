#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int j = 0; j < t; j++){
        int n;
        scanf("%d",&n);
        int point = 0;
        int even = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d",&a); 
            if(a%2 == 0){
                even++;
            }
        }
        if(even == 0) point = n -1;
        else if(even > 1) point = n - even + 1;
        else point = n;
        printf("%d\n",point);
    }
}