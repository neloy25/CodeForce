#include <stdio.h>

int base_conversion(int n, char s[], int i) {
    if (n < 1) return i;
    i = base_conversion(n / 2, s, i);
    s[i++] = (n % 2) + '0';
    return i;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[32];
        int n;
        scanf("%d", &n);
        int len = base_conversion(n, s, 0);
        s[len] = '\0';
        printf("%s\n", s);
    }
    return 0;
}
