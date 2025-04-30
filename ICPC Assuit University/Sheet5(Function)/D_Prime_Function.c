#include<stdio.h>
#include<math.h>

int primeCheck(int n){
    if(n < 2) return 0;
    int len = sqrt(n);
    for (int i = 2; i <= len; i++) {
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(primeCheck(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}