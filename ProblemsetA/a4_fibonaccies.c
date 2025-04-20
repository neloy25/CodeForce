#include<stdio.h>


int main() {
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
        int a1,a2,a3,a4,a5;
        scanf("%d %d %d %d", &a1,&a2,&a4,&a5);
        int candidate[3] = {a1 + a2, a4 - a2, a5 - a4};
        int max_fibo = 0;
        for (int i = 0; i < 3; i++) {
            int count = 0;
            a3 = candidate[i];
            if(a1 + a2 == a3) count++;
            if(a2 + a3 == a4) count++;
            if(a3 + a4 == a5) count++;
            if(max_fibo < count) max_fibo = count;
        }
        printf("%d\n", max_fibo);
    }
    return 0;
}