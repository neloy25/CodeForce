#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        long long int s;
        scanf("%d%lld", &n,&s);
        long long int max = ((long long)n * (n + 1)) /2LL;
        if(max < s || s <= 2){
            printf("%d",-1);
        } else if(n >= s){
            printf("%d %lld",1,s-1);
        } else if(n > (s / 2) + 1){
            if(s % 2 == 0) printf("%lld %lld",(s / 2) - 1, (s / 2) + 1);
          else printf("%lld %lld",(s / 2), (s / 2) + 1);
        }
        else{  
            int i;
            for(i = n; i >= 1; i--){
                s = s - i;
                if(s < 0) break;
                printf("%d ",i);
            }
            if(s + i != 0){
                printf("%d",s + i);
            }
        }
        printf("\n");
    }
    return 0;
}