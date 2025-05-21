#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int len;
        scanf("%d", &len);
        char s[len + 1];
        scanf("%s", s);
        int count1 = 0;
        for (int i= 0; i < len; i++) {
            if(s[i] == '1') count1++;
        }

        int res = (len - 1) * count1 + len - count1;
        printf("%d\n", res);
    }
    return 0;
}