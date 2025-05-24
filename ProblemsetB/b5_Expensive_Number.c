#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[102];
        scanf("%s", s);
        int count1 = 0;
        int len = strlen(s);
        for (int i = len - 1; i >= 0; i--) {
            if(s[i] != '0'){
                break;
            }
            count1++;
        }
        
        int count2 = 0;
        for (int i = 0; i < len; i++) {
            if(s[i] == '0') count2++;
        }

        int zero_count = count2 - count1 + 1;
        int res = len - zero_count;
        printf("%d\n", res);
    }
    return 0;
}