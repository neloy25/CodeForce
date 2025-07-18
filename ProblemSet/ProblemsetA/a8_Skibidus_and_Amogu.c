#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[11];
        scanf("%s", &s);
        int len = strlen(s);
        s[len - 1] = '\0';
        s[len - 2] = 'i';
        printf("%s\n", s);
    }
    return 0;
}