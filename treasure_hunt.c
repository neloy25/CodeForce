#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        int check = a % (x + y);
        if(x > check) printf("NO\n");
        else printf("YES\n");
    }
}