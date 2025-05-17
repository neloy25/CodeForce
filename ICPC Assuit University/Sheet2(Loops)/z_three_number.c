#include<stdio.h>

int main(){
    for(int i = 0; i < 50; i++){
        int k,s;
        int count = 0;
        scanf("%d%d",&k,&s);
        for(int x = 0; x <= k; x++){
            for(int y = 0; y <= k; y++){
                int z = s - x - y;
                if(z >= 0 && z <= k) {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
}