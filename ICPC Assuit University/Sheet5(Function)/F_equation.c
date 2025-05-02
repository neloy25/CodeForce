#include<stdio.h>
long long int power(int n,int e){
    long long int y = 1;
    for (int i = 0; i < e; i++) {
        y *= n;
    }
    return y;
}
int main() {
    int x,n;
    scanf("%d%d", &x,&n);
    long long int sum = 0;
    for (int i = 2; i <= n; i+=2) {
        long long int val = power(x,i);
        sum+=val;
    }
    printf("%lld", sum);
    return 0;
}