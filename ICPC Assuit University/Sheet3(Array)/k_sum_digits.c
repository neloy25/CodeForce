#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int sum = 0;

    getchar();

    for(int i = 0; i < t; i++) {
        char ch;
        scanf("%c", &ch);
        sum += ch - '0';
    }
    printf("%d", sum);
}