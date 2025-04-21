#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int count = 0;
    for(int i = a; i <=b; i++){
        int copy = i;
        while(copy > 0){
            int rem = copy % 10;
            if(rem != 4 && rem != 7) break;
            copy = copy / 10;
        }
        if(copy == 0){ 
            printf("%d ",i);
            count++;
        }
    }
    if(count == 0) printf("%d",-1);
    return 0;
}