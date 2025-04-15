#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    
    long long int row = n / 4;
    int col = n % 4;
    printf("%lld ",row);
    if(row % 2 == 0) printf("%d",col);
    else printf("%d",3-col);
    return 0;
}