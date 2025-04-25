#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    long long int b;
    scanf("%lld", &b);
    char c;
    scanf(" %c", &c);
    float d;
    scanf("%f", &d);
    double e;
    scanf("%lf", &e);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf",a,b,c,d,e);
    return 0;
}