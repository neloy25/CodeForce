#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int st = 0;
    long long int end = 1;
    long long int sum = st + end;
    if(n == 1) printf("%lld", st);
    else if(n == 2) printf("%lld", end);
    else if(n == 3) printf("%lld", sum);
    else{
        for (int i = 4; i <= n; i++) {
            st = end;
            end = sum;
            sum = st + end;
        }
        printf("%lld", sum);
    };
    return 0;
}