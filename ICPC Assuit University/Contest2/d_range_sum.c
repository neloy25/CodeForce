#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int l,r;
        scanf("%d%d", &l,&r);
        if(l > r){
            int temp = l;
            l = r;
            r = temp;
        }
        int n = (r -l) + 1;
        long long int sum = ((long long)n * (2LL * l + n - 1)) / 2;
        printf("%lld\n",sum);
    }
    return 0;
}