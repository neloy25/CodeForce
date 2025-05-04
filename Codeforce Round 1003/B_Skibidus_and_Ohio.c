#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[101];
        scanf("%s", &s);
        int len = strlen(s);
        int flag = 1;
        for (int i = 0; i < len - 1; i++) {
            if(s[i] == s[i+1]){
                flag = 0;
                printf("1\n");
                break;
            }
        }
        if(flag) printf("%d\n", len);
    }
    return 0;
}