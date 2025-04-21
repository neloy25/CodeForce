#include<stdio.h>
#include<string.h>

int main() {
    char s[1001];
    scanf("%s", &s);
    char t[1001];
    scanf("%s", &t);

    printf("%d %d\n", strlen(s),strlen(t));
    printf("%s ", s);
    printf("%s", t);
    return 0;
}