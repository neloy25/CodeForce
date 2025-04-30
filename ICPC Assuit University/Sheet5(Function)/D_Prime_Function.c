#include<stdio.h>
#include<math.h>

int primeCheck(int n){
    int len = sqrt(n);
    for (int i = 2; i <= len; i++) {
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", primeCheck(n));
    return 0;
}