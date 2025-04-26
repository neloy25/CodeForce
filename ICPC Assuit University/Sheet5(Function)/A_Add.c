#include<stdio.h>
int add(int x,int y){
    return x + y;
}
int main() {
    int x,y;
    scanf("%d%d", &x,&y);
    int res = add(x,y);
    printf("%d", res);
    return 0;
}